// Populate inorder successor of all noes in BST - gfg

void inorder(Node* root , vector<Node*> &v) {

    // base case
    if (root == NULL) {
        return ;
    }

    inorder(root -> left , v) ;
    v.push_back(root) ;
    inorder(root -> right , v) ;
}

void inorderSuccessor(Node* root) {

    vector<Node*> v1 ;
    vector<Node*> v2 ;
    inorder(root , v1) ;
    inorder(root , v2) ;

    v2[0] -> next = NULL ;
    v1[v1.size() - 1] = NULL ;

    for (int i = 0 ; i < v1.size() , i++) {
        v1[i] -> next = v2[i+1] ;
    }

    return ;

}