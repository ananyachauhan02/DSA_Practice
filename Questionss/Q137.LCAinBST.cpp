// LCA in a BST - codestudio , leetcode

// approach - 1 - iterative 
// TC - O(n) , SC - O(1)

Node* LCA(Node* root , Node* p , Node* q) {

    while (root != NULL) {
        if (root -> data < p -> data && root -> data < q -> data) {
            root = root -> right ;
        }
        else if (root -> data > p -> data && root -> data > q -> data) {
            root = root -> left ;
        }
        else {
            return root ;
        }
    }

    return root ;
}

// approach - 2 - recursive
// TC - O(n) , SC - O(n)

Node* LCA(Node* root , Node* p , Node* q) {

    // base case
    if (root == NULL) {
        return root ;
    }

    if (root -> data < p -> data && root -> data < q -> data) {
        return LCA(root -> right , p , q) ;
    }

    if (root -> data > p -> data && root -> data > q -> data) {
        return LCA(root -> left , p , q) ;
    }

    return root ;
}