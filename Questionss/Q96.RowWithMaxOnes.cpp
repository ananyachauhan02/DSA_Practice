// Row with maximum ones - leetcode

vector<int> rowMax(vector<vector<int>> &nums) {

    int n = nums.size() ;
    int m = nums[0].size() ;

    int rowCnt = 0 ;
    int oneCnt = 0 ;


    for(int i = 0 ; i < n ; i++) {
        int cnt = 0 ;
        for(int j = 0 ; j < m ; j++) {
            if(nums[i][j] == 1) {
                cnt++ ;
            }
        }
        if (cnt > oneCnt) {
            oneCnt = cnt ;
            row = i ;
        }
    }

    vector<int> ans ;
    ans.push_back(row) ;
    ans.push_back(oneCnt) ;

    return ans ;


}