// First missing positive -- LEETCODE


int firstMissing(vector<int> & nums) {

    set <int> st ;

    for (int i = 0 ; i < nums.size() ; i++) {
        if (nums[i] > 0) {
            st.insert(nums[i]) ;
        }
    }

    int temp = 1 ;
    set <int> :: iterator it = st.begin() ;

    while (it != st.end()) {
        if (*it == temp) {
            temp++ ; 
        }

        it++ ;
    }

    return temp ;


}