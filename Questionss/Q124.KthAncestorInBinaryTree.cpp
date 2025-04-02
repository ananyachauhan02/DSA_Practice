// Kth ancestor in a binary tree - leetcode , codestudio , gfg

Node* solve(Node* root , int node , int &k) {

    // base case
    if (root == NULL) {
        return NULL ;
    }

    if (root -> data == node) {
        return root ;
    }

    Node* LA = solve(root -> left , node , k) ;
    Node* RA = solve(root -> right , node , k) ;

    if (LA != NULL && RA == NULL) {
        k-- ;
        if (k == 0) {
            // ans ko lock karo
            k = INT_MAX ;
            return root ;
        }
        return leftAns ;
    }
    if (RA != NULL && LA == NULL) {
        k-- ;
        if (k == 0) {
            // ans ko lock karo 
            k = INT_MAX ;
            return root ;
        }
        return rightAns ;
    }

    return NULL ;
}

int func(Node* root , int node , int k) {

    Node* ans = solve(rot , node , k) ;

    if (ans == NULL || ans -> data == node){
        return -1 ;
    }
    else {
        return ans -> data ;
    }
}