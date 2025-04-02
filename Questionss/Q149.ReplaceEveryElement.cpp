// Replace every element with the least greater element on its right - gfg

vector<int> findLeastGreater(vector<int>& arr, int n) {
        
        vector<int> ans(n) ;
        set<int> s ;
        
        ans[n-1] = -1 ;
        s.insert (arr[n-1]) ;
        
        for (int i = n - 2 ; i >= 0 ; i--) {
            int x = arr[i] ;
            auto it = s.upper_bound(x) ;
            
            if(it == s.end()) 
            ans[i] = -1 ;
            
            else 
            ans[i] = *it ;
            
            s.insert(x) ;
        }
        return ;
}