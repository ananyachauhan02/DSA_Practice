// Union of two arrays - GFG

vector solve(vector<int> &a , vector<int> &b , int n) {
        set<int> st ;
        for (int i = 0 ; i < a.size() ; i++) {
            st.insert(a[i]) ;
        }

        for (int i = 0 ; i < b.size() ; i++) {
            st.insert(b[i]) ;
        }

        set <int> :: iterator it = st.begin() ;
        vector<int> ans ;

        for (int i = 0 ; i < st.size() ; i++) {
            ans.push_back(*it) ;
            it++ ;
        }

        return ans ;


}