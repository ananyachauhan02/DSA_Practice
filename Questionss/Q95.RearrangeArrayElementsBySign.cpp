// Rearrange array elements by sign - Leetcode

vector<int> rearrange(vector<int>& nums) {

    int s = nums.size() ;

    int pos[n/2] ;
    int neg[n/2] ;
    int p = 0 , n = 0 ;

    for (int i = 0 ; i < s ; i++) {
        if(nums[i] > 0) {
            pos[n] = arr[i] ;
            p++ ;
        }
        else {
            neg[n] = arr[i] ;
            n++ ;
        }
    }

    for (int i = 0 ; i < n/2 ; i++) {
        nums(2*i) = pos[i] ;
        nums(2*i+1) = neg[i] ;
    }
    return nums ;

}