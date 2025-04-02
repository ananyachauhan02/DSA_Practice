// ROTATE ARRAY - leetcode

void rotate(vector<int> &nums , int k) {
    int n = nums.size() ;
    vector<int> ans(n) ;

    for(int i = 0 ; i < n ; i++) {
        int temp = (i+k) % n ;
        ans[temp] = nums[i] ;
    }
    nums = ans ;
}

