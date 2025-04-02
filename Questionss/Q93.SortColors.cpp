// sort colors - leetcode

// approach - 1 - counting
void sortColors(vector<int>& nums) {

    int n = nums.size() ;

    int zero = 0 ;
    int one = 0 ;
    int two = 0 ;

    for (int i = 0 ; i < n ; i++) {
        if (nums[i] == 0) {
            zero++ ;
        }
        if (nums[i] == 1) {
            one++ ;
        }
        if (nums[i] == 2) {
            two++ ;
        }
        
    }

    for (int i = 0 ; i < n ; i++) {
        if(zero != 0) {
            nums[i] = 0 ;
            zero-- ;
        }
        if(one != 0) {
            nums[i] = 1 ;
            one-- ;
        }
        if(two != 0) {
            nums[i] = 2 ;
            two-- ;
        }
    }
}

// approach - 2 - two pointers approach
void sortColors(vector<int>& nums) {
    int n = nums.size() ;
    int start = 0 ;
    int end = n - 1 ;
    int i = 0 ;

    while(i<=end) {
        if (nums[i] == 0) {
            swap(nums[i] , nums[start]) ;
            start++ ;
            i++ ;
        }
        else if (nums[i] == 2) {
            swap(nums[i] , nums[end]) ;
            end-- ;
        }
        else {
            i++ ;
        }
    } 
}