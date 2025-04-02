// right view of binary tree - leet code , gfg , codestudio

void solve(Node* root , vector<int> &ans , int lvl) {

    // base case
    if (root == NULL) {
        return ;
    }

    // entered a new level
    if (lvl == ans.size()) {
        ans.push_back(root -> data) ;
    }

    solve(root -> right , ans , lvl+1) ;
    solve(root -> left , ans , lvl+1) ;

}

vector<int> RightView(Node* root) {

    vector<int> ans ;
    solve(root , ans , 0) ;
    return ans ;

}