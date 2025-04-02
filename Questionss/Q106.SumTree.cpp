// SUM TREE - gfg , codestudio

pair<bool , int> fast(Node* root) {

    // base case
    if (root == NULL) {
        pair<bool , int> p = make_pair(true , 0) ;
        return 0 ;
    }

    // for leaf nodes
    if (root -> left == NULL && root -> right == NULL) {
        pair <bool , int> q = makepair(true , root -> data) ;
        return q ;
    }

    // recursive call
    pair <bool , int> left = fast (root -> left ) ;
    pair <bool , int> right = fast (root -> right) ;

    bool leftAns = left.first ;
    bool rightAns = right.first ;

    bool condn = root -> data == left.second + right.second ;

    pair <bool , int> ans ;

    if (leftAns && rightAns && condn) {
        ans.first = true ;
        ans.second = 2* root -> data;
    }

    else {
        ans.first = false ;
    }

    return ans ;
}

bool isSumTree(Node* root) {
    return fast(root).first ;
}