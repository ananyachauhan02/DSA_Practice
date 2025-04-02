// Check Identical Trees - codestudio , gfg - leetcode
// TC - O(n)

bool isIdentical(node* root1 , node* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true ;
    }

    if (root1 == NULL && root2 != NULL) {
        return false ;
    }

    if (root1 != NULL && root2 == NULL) {
        return false ;
    }

    bool left = isIdentical(root1 -> left , root2 -> left) ;
    bool right = isIdentical(root1 -> right , root2 -> right) ;
    bool value = root1 -> data == root2 -> data ;

    if (left && right && value) {
        return true ;
    }
    else {
        return false ;
    }
}