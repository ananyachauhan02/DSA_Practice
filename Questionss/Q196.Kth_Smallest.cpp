// Kth smallest element - GFG


int solve(vector<int> arr ,int k) {
    set <int> st ;

    for (int i = 0 ; i < arr.size() ; i++) {
        st.insert(arr[i]) ;
    }

    set<int> :: iterator it = st.begin() ;

    for (int i = 1 ; i < k ; i++) {
        it++ ;
    }

    int ans = *it ;
    return ans;
}