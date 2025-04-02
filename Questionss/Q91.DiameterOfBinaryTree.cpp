// Diameter of a binary tree - CODESTUDIO + GFG + leetcode

// approach -1 
// TC - O(n^2)

int height(Node* root) {
    // base case
    if(root == NULL) {
        return 0 ;
    }

    int h1 = height(root -> left) ;
    int h2 = height(root -> right) ;
    int ans = max(h1 , h2) + 1 ;
    return ans ;
}

int Diameter(Node* root) {
    // base case
    if (root == NULL) {
        return 0 ;
    }

    int op1 = Diameter(root -> left) ;
    int op2 = Diameter(root -> right) ;
    int op3 = height(root -> left) + height(root -> right) + 1 ;

    int ans = max(op1, max(op2, op3)) ;
    return ans ;
    
}


// approach - 2 
// TC - O(n) 

pair<int,int> diameterFast(Node* root) {

    // base case
    if(root == NULL) {
        pair<int,int> p = make_pair(0,0) ;
        return p ;
    }

    pair<int,int> left = diameterFast(root -> left) ;
    pair<int,int> right = diameterFast(root -> right) ;

    int op1 = left.first ;
    int op2 = right.first ;
    int op3 = left.second + right.second  ;

    pair<int,int> ans ;
    ans.first = max(op1 , max(op2, op3)) ;
    ans.second = max(left.second , right.second) + 1 ;
    return ans ;
}

int Diameter(Node* root) {
    return diameterFast(root).first ;
}