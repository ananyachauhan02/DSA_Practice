// Convert BST to min heap - codestudio 

void inorder(Node* root , vector<int> &ans) {

    if (root == NULL) {
        return ;
    }

    inorder(root -> left , ans) ;
    ans.push_back(root -> data) ;
    inorder(root -> right , ans) ;
}

void preorderFill(Node* root , int index , vector<int> &ans) {

    if (root == NULL) {
        return ;
    }

    root -> data = ans[index++] ;
    preorder(root -> left , index , ans) ;
    preorder(root -> right , index , ans) ;
}

Node* convertBST(Node* root) {

    vector<int> ans ;
    inorder(root , ans) ;

    int index = 0 ;
    preorderFill(root , index , ans) ;

    return root ;
}