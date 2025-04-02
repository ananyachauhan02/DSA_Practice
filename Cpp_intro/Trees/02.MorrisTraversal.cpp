// morris traversal

void morrisTraversal(Node* root) {
    Node* curr ;
    Node* pre ;

    if (root == NULL) {
        return ;
    }

    curr = root ;

    while (curr != NULL) {
        if (curr -> left == NULL) {
            curr = curr -> right ;
        }
        else {
            pre = curr -> left ;
            while (pre -> right != NULL && pre -> right != curr) {
                curr = curr -> right ;
            }

            if (curr -> right == root) {
                curr -> right = NULL ;
                root = root -> right ;
            }
            else {
                curr -> right = root ;
                root = root -> left ;
            }
        }
    }
}