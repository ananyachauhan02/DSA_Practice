// K-diff Pairs in an Array - leetcode , codestudio , gfg

// approach 1 - TC - O(N^2)
int Kdiff(vector<int> nums , int k) {

    int n = nums.size() ;
    sort(nums.begin() , nums.end()) ;
    map <int , int> mp ;

    for (int i = 0 ; i < n ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            if (nums[j] - nums[i] == k) {
                mp[nums[j]] = nums[i] ;
            }
        }
    }

    return mp.size() ;
}


// approach - 2 - TC - O(nlog n) - two pointer approach

int Kdiff(vector<int> nums , int k) {

    int n = nums.size() ;
    map <int , int> mp ;

    int i = 0 ;
    int j = 1 ;
    sort(nums.begin() , nums.end()) ;

    for (j < n) {
        int diff = abs[nums[j] - nums[i]] ;
        if (diff == k) {
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