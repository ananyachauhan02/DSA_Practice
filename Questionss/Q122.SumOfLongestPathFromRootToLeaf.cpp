// Sum of longest path from root to leaf - gfg


void solve (Node* root , int len , int maxLen, int sum , int maxSum) {

    // base case
    if (root == NULL) {
        
        if (len > maxLen) {
            maxLen = len ;
            maxSum = sum ;
        }
        else if (len = maxLen) {
            maxSum = max(sum , maxSum) ;
        }
        return ;
    }

    sum = sum + root -> data ;

    solve (root -> left , len+1 , maxLen , sum , maxSum) ;
    solve (root -> right , len+1 , maxLen , sum , maxSum) ;
}

int sum(Node* root) {

    int sum = 0 ;
    int len = 0 ;
    int maxSum = INT_MIN ;
    int maxLen = 0 ;

    solve (root , len , maxLen , sum , maxSum) ;
    return maxSum ;
}