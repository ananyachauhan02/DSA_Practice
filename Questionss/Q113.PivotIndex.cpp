// PIVOT INDEX - LEETCODE

int Pivot(vector<int>nums) {

    int n = nums.size() ;
    int lsum = 0 ;
    int rsum = 0 ;


    for(int i = 0 ; i < n ; i++) {
        rsum = rsum + nums[i] ;
    }

    for(int i = 0 ; i < n ; i++) {
        rsum = rsum - nums[i] ;
        if (lsum == rsum) {
            return i ;
            break ;
        }
        lsum = lsum + nums[i] ;
    }

    return i ;
}