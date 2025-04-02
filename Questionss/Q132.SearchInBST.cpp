// search in bst - codestudio , gfg

// approach - 1  (recursive)
// TC - O(n) , SC - O(n) 

bool search(Node* root , int x) {

    // base case
    if (root == NULL) {
        return false ;
    }

    if (root -> data == x) {
        return true ;
    }

    if (root -> data > x) {
        search(root -> left , x) ;
    }
    else {
        search(root -> right , x) ;
    }
}

// approach - 2 (itertative)
// TC - O(n) , SC - O(1)

bool search(Node* root , int x) {

    Node* temp = root ;

    while (temp != NULL) {
        if (temp -> data == x) {
            return true ;
        }
        else if (temp -> data > x) {
            temp = temp -> left ;
        }
        else {
            temp = temp -> right ;
        }
    }

    return false ;

}