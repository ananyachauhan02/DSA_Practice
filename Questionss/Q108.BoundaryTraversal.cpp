// Boundary traversal - gfg , codestudio

void traverseLeft(Node*root , vector<int> &ans) {

    if ((root == NULL) || (root -> left == NULL && root -> right == NULL)) {
        return ;
    }

    ans.push_back(root -> data) ;

    if (root -> left != NULL) {
        traverseLeft(root -> left , ans) ;
    }
    else {
        traverseLeft(root -> right , ans) ;
    }

}

void traverseLeaf(Node*root , vector<int> &ans) {

    if (root == NULL) {
        return ;
    }

    if (root -> left == NULL && root -> right == NULL) {
        ans.push_back(root -> data) ;
    }

    traverseLeaf(root -> left , ans) ;
    traverseLeaf(root -> right , ans) ;

}

void traverseRight(Node*root , vector<int> &ans) {

    if ((root == NULL) || (root -> left == NULL && root -> right == NULL)) {
        return ;
    }

    if (root -> right != NULL) {
        traverseRight(root -> right , ans) ;
    }
    else {
        traverseRight(root -> left , ans) ;
    }

    ans.push_back(root -> data) ;
}


vector<int> Boundary(Node* root) {

    vector<int> ans ;
    if (root == NULL) {
        return ans ;
    }
    ans.push_back(root) ;

    // traversing in left part
    traverseLeft(root -> left , ans) ;

    // printing leaf nodes
    // left subtree
    traverseLeaf(root -> left , ans) ;
    // right subtree
    traverseLeaf(root -> right , ans) ;

    // traversing right part
    traverseRight(root -> right , ans) ;


    return ans ;
    
}