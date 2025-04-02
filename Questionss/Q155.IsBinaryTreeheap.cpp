// IS BINARY TREE HEAP - codestudio , gfg

int countNodes(Node* root) {

    // base case
    if (root == NULL) {
        return 0 ;
    }

    int ans = 1 + countNodes(root -> left) + countNodes(root -> right) ;
    return ans ;
}

bool isCBT(Node* root , index , cnt) {

    // base case
    if (root == NULL) {
        return true ;
    }

    if (index >= cnt) {
        return false ;
    }

    else {
        bool left = isCBT(root -> left , 2*index + 1 , cnt) ;
        bool right = isCBT(root -> right , 2*index + 2 , cnt) ;
        return (left && right) ;
    }
}

bool isMaxOrder(Node* root) {

    // base case
    if (root -> left == NULL && root -> right == NULL) {
        return true ;
    }

    if (root -> right == NULL) {
        return (root -> data > root -> left -> data) ;
    }

    else {
        bool left = isMaxOrder(root -> left) ;
        bool right = isMaxOrder(root -> right) ;

        return (left && right && (root -> data > root -> left -> data && root -> data > root -> right -> data)) ;
    }
}


bool isHeap(Node* root) {
    int index = 0 ;
    int totalNodes = countNodes(root) ;
    if (isCBT(root , index , totalNodes) && isMaxOrder(root)) {
        return true ;
    }
    else {
        return false ;
    }
}
