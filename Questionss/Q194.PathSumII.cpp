// K sum paths (path sum II) - leetcode , codestudio , gfg

void solve(Node* root , int target , int sum , vector<vector<int>> &ans , vector<int> v) {

    if (root == NULL) {
        return ;
    }

    sum = sum + root -> data ;
    v.push_back(root -> data) ;

    if (root -> left == NULL && root -> right == NULL) {
        if (sum == target) {
            ans.push_back(v) ;
        }
    }

    solve(root -> left , target , sum , ans , v) ;
    solve(root -> right , target , sum , ans , v) ;


}

vector<vector<int>> KsumPaths(Node* root , int target) {

    vector<vector<int>> ans ;
    vector<int> v ;
    int sum = 0 ;

    solve(root , target , sum , ans , v) ;

    return ans ;
}
