// Path Sum - leetcode , gfg


bool solve(Node* root , int S , int sum) {

    if (root == NULL) {
        return false ;
    }

    sum = sum + root -> data ;

    if (root -> left == NULL && root -> right == NULL) {
        if (sum == S) {
            return true ;
        }

        else {
            return false ;
        }
    }

    bool left = solve(root -> left , S , sum) ;
    bool right = solve(root -> right , S , sum) ;

    return left||right ;
}

bool PathSum(Node* root , int S) {
    int sum = 0 ;
    return solve(root , S, sum) ;
}