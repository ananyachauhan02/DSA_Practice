// RAT in a Maze - codestudio 


bool isSafe(int newx , int newy , vector<vector<bool>> vis , vector<vector<int>> & arr , int n) {
    if ((newx >= 0 && newx <n) && (newy >= 0 && newy < n) && (vis[newx][newy] == 0) && arr[newx][newy] == 1) {
        return true ;
    }
    else {
        return false ;
    }
}

void solve (int x , int y , vector<vector<bool>> & vis , vector<vector<int>> & arr , int n , vector<string> & ans , string path) {

    // base case
    if (x == n-1 && y == n-1) {
        ans.push_back(path) ;
        return ;
    }

    // 4 movement
    // D L R U

    vis[x][y] = 1 ;

    // Down
    if (isSafe(x+1 , y , vis , arr , n)) {
        solve(x+1 , y , vis , arr , n , ans , path + 'D') ;
    }

    // Left
    if (isSafe(x , y-1 , vis , arr , n)) {
        solve(x , y-1 , vis , arr , n , ans , path + 'L') ;
    }

    // Right
    if (isSafe(x , y+1 , vis , arr , n)) {
        solve(x , y+1 , vis , arr , n , ans , path + 'R') ;
    }

    // UP
    if (isSafe(x-1 , y , vis , arr , n)) {
        solve(x-1 , y , vis , arr , n , ans , path + 'U') ;
    }

    vis[x][y] = 0 ;

}

vector<string> searchMaze(vector<vector<int> > &arr , int n) {
    vector<string> ans ;
    vector<vector<bool> > visited(n , vector<bool> (n , 0)) ;
    string path = "" ;

    if (arr[0][0] == 0) {
        return ans ;
    }
    solve (0 , 0 , arr , n , ans , visited , path) ;
    return ans ;
}