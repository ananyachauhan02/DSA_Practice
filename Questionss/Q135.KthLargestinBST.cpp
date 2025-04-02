// Kth largest element in BST - codestudio , leetcode

// approach 1 - using recursion

void solve(Node* root , vector<int>& ans) {

    // base case
    if (root == NULL) {
        return ;
    }

    solve(root -> right , ans) ;
    ans.push_back(root -> data) ;
    solve(root -> left , ans) ;
}

int KthLargest(Node* root , int k) {

    vector<int> ans ;
    solve(root , ans) ;
    int n = ans.size() ;

    if (k-1 < n and k-1 >= 0) {
        return ans[k-1] ;
    }
    return -1 ;
}

// approach 2 - using heaps

int KthLargest(vector<int> &nums , int k) {

    int n = nums.size() ;

    for (int i = 0 ; i < k ; i++) {
        pq.push(nums[i]) ;
    }

    for (int i = k ; i < n ; i++) {
        if (nums[i] > pq.top()) {
            pq.pop() ;
            pq.push(nums[i]) ;
        }
    }

    return pq.top() ;
}

