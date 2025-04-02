// MISSING NUMBERS - LEETCODE

int missing(vector<int> &nums) {

    int n = nums.size() ;
    int sum1 = (n * (n + 1)) / 2 ;

    int sum2 = 0 ;

    for(int i = 0 ; i < n-1 ; i++) {
        sum2 += nums[i] ;
    }

    int ans = sum1 - sum2 ;
    return ans ;
}