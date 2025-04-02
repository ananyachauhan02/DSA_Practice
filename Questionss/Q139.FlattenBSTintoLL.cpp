// Flatten BST into sorted Linked Lists - codestudio

// approach 1 - using node* type vector

void inorder(Node* root , vector<Node*> &v) {

    // base case
    if (root == NULL) {
        return ;
    }

    inorder(root -> left , v) ;
    v.push_back(root) ;
    inorder(root -> right , v) ;
}

Node* FlattenBST(Node* root) {

    vector<Node*> v ;
    inorder(root , v) ;

    int n = v.size() ;

    // for first node
    Node* newRoot = v[0] ;
    Node* curr = newRoot ;

    for (int i = 1 ; i < n ; i++) {
        Node* temp = v[i] ;
        curr -> left = NULL ;
        curr -> right = temp ;
        curr = temp ;
    }

    // for last node
    curr -> left = NULL ;
    curr -> right = NULL ;

    return newRoot ;
}

// approach - 2 - using int type vector

void inorder(Node* root , vector<int> &v) {

    // base case
    if (root == NULL) {
        return ;
    }

    inorder(root -> left , v) ;
    v.push_back(root -> data) ;
    inorder(root -> right , v) ;

}

Node* FlattenBST(Node* root) {
    
    vector<int> v ; 
    inorder(root , v) ;

    int n = v.size() ;

    Node* newRoot = new Node(v[0]) ;
    Node* curr = newRoot ;

    for (int i = 1 ; i < n ; i++) {
        Node* temp = new Node (v[i]) ;
        curr -> left = NULL ;
        curr -> right = temp ;
        curr = temp ;
    }

    curr -> left = NULL ;
    curr -> right = NULL ;

    return newRoot ;
}