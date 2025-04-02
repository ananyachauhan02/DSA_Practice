// K different pairs in an array - leetcode

int diffPairs(vector<int> arr , int k) {

    int n = arr.size() ;
    int i = 0 ;
    int j = 1 ;
    map<int , int> mp ;

    while (j < n) {
        int diff = abs(nums[i] - nums[j]) ;
        if ((diff == k) && (i != j)) {
            mp[nums[j]] = nums[i] ;
            i++ ;
            j++ ;
        }
        else if (diff > k) {
            i++ ;
        }
        else {
            j++ ;
        }
    }

    return mp.size() ;


}