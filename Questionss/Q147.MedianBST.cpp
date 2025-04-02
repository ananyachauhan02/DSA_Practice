// Median of BST - gfg
// TC - O(n) , SC - O(1)

int count(Node* root) {

    // base case
    if (root == NULL) {
        return ;
    }

    int leftCount = count(root -> left) ;
    int rightCount = count(root -> right) ;

    return leftCount + rightCount + 1 ;
}

void solve(Node* root , int mid , int &cnt , int &ans) {

    if (root == NULL) {
        return ;
    }

    solve(root -> left , mid , cnt , ans) ;
    cnt++ ;
    if (cnt == mid) {
        ans = root -> data ;
        return ;
    }

    solve(root -> right , mid , cnt , ans) ;
}

float MedianBST(Node* root) {

    int total = count(root) ;
    int mid = total / 2 ;
    int ans = 0 ;
    int ans1 = 0 ;
    int ans2 = 0 ;
    int cnt = 0 ;

    if (total % 2 == 0) {
        solve(root , mid , cnt , ans1) ;
        cnt = 0 ;
        solve(root , mid+1 , cnt , ans2) ;
        return (float) (ans1+an2)/2 ;
    }

    else {
        solve(root , mid+1 , cnt , ans) ;
        return (float) ans;
    }
}