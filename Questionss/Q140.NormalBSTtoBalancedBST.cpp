// Normal BST to balanced BST - leetcode , codestudio

void inorder(Node* root , vector<int> &v) {

    // base case
    if (root == NULL) {
        return ;
    }

    inorder(root -> left , v) ;
    v.push_back(root -> data) ;
    inorder(root -> right , v) ;

}

Node* inorderBST(int s , int e , vector<int> &v) {

    // base case
    if (s > e) {
        return NULL ;
    }
    int mid = (s + e) / 2 ;

    Node* root = new Node(v[mid]) ;
    
    root -> left = inorderBST(s , mid - 1 , v) ;
    root -> right = inorderBST(mid + 1 , e , v) ;

    return root ;

}

Node* NormalBST(Node* root) {

    vector<int> v ;
    inorder(root , v) ;

    int n = v.size() ;

    return inorderBST(0 , n-1 , v) ;

}