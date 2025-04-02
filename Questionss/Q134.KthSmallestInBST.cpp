// Kth smallest element in BST - codestudio

// approach - 1 - recursion using vector

void solve(Node* root , vector<int> &ans) {

    // base case
    if (root == NULL) {
        return ;
    }

    solve(root -> left , ans) ;
    ans.push_back(root -> data) ;
    solve(root -> right , ans) ;
}

int KthSmallest(Node* root , int k) {

    vector<int> ans ;
    solve(root , ans) ;
    int n = ans.size() ;

    if (k-1 < n and k-1 >= 0) {
        return ans[k-1] ;
    }
    return -1 ;
}





// approach - 2 - recursion
// TC - O(n) , SC - O(h)

int solve(Node* root , int &i , int k) {
    
    // base case
    if (root == NULL) {
        return -1 ;
    }

    // L
    int left = solve (root -> left , i , k) ;
    if (left != -1) {
        return left ;
    }

    // N
    i++ ;
    if (i == k) {
        return root -> data ;
    }
    // R
    return solve(root -> right , i , k) ;


}

int KthSmallest(Node* root , k) {
    int i = 0 ;
    int ans = solve(root , i , k) ;
    return ans ;
}


// approach - 3 - using heaps

int KthSmallest(int arr[] , int l , int r , int k) {

    priority_queue<int> pq ;

    for (int i = 0 ; i < k ; i++) {
        pq.push(arr[i]) ;
    }

    for (int i = k ; i <= r ; i++) {
        if (arr[i] < pq.top()) {
            pq.pop() ;
            pq.push(arr[i]) ;
        }
    }

    int ans = pq.top() ;
    return ans ;
}