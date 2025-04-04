// check for balanced tree - gfg

int height(node* root) {
    if (root == NULL) {
        return 0 ;
    }
    int h1 = height(root -> left) ;
    int h2 = height(root -> right) ;

    int ans = max(h1 , h2) + 1 ;
    return ans ;
}
// approach - 1 TC - O(n^2)
bool isBalanced(node* root) {

    if (root == NULL) {
        return 0 ;
    }
    bool left = isBalanced(root -> left) ;
    bool right = isBalanced(root -> right) ;

    bool diff = abs(height(root -> left) - height(root -> right)) <= 1 ;

    if (left && right && diff) {
        return 1 ;
    }
    else {
        return false;
    }
}

// approach - 2 TC - O(N)

pair<bool, int> isFast(Node*root) {

    if (root == NULL) {
        pair<bool , int> p = make_pair(true , 0) ;
        return p ;
    }

    pair<int , int> left = isFast(root -> left) ;
    pair<int , int> right = isFast(root -> right) ;

    bool leftAns = left.first ;
    bool rightAns = right.first ;

    bool diff = abs(left.second - right.second) <= 1 ;

    pair<bool , int> ans ;
    ans.second = max(left.second , right.second) + 1 ;

    if (leftAns && rightAns && diff) {
        ans.first = true ;
    }
    else {
        ans.first = false ;
    }

    return ans ;
}

bool isBalanced(node* root) {
    isFast(root).first ;
}