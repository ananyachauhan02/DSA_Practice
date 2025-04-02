// Common Elements In Three Sorted Arrays - codestudio , gfg

#include <bits/stdc++.h> 
vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    int n1 = a.size() ;
    int n2 = b.size() ;
    int n3 = c.size() ;

    vector<int>ans ;
    set<int> s ;
    
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;

    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            s.insert(a[i]) ;
            i++ ;
            j++ ;
            k++ ;
        }
        else if (a[i] < b[j]) {
            i++ ;
        }
        else if (b[j] < c[k]) {
            j++ ;
        }
        else {
            k++ ;
        }
    }

    for (auto i : s) {
        ans.push_back(i) ;
    }
    
    return ans ;

}