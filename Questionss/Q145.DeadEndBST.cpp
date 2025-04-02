// check whether BST contains dead end or not - codestudio , gfg

bool solve(Node* root , int mini , int maxi) {

    if (root == NULL) {
        return false ;
    }

    if (maxi == mini) {
        return true ;
    }

    bool leftAns = solve(root -> left , mini , root->data - 1) ;
    bool rightAns = solve(root -> right , root->data + 1 , maxi) ;

    return leftAns || rightAns ;
}

bool isDead(Node* root) {

    int mini = 1 ;
    int maxi = INT_MAX ;
    return solve(root , mini , maxi) ;
}