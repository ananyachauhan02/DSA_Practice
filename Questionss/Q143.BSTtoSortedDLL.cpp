// BST to sorted Doubly Linked Lists - codestuido

void solve(Node* root , Node* &head) {

    if (root == NULL) {
        return ;
    }
    solve(root -> right , head) ;
    root -> right = head ;

    if (head != NULL) {
        head -> left = root ;
    }
    root = head ;
    solve(root -> left , head) ;
}

Node* BSTtoDLL(Node* root) {

    Node* head = NULL ;
    solve(root , head) ;

    return head ;
}