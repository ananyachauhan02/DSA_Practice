// Celebrity problem - Geeks for geeks
// TC - O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution

{
    private :
    bool knows(vector<vector<int> >& M, int a, int b) {
        
        if (M[a][b] == 1) 
            return true ;
        
        else 
            return false ;
        
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
       stack<int>s ;
       // step 1 : push all elemenets in stack
       for (int i = 0 ; i< n ; i++) {
           s.push(i) ;
       }
       
       // step 2 : get 2 elements and compare them
       while (s.size() > 1) {
           
           int a = s.top() ;
           s.pop() ;
           
           int b = s.top() ;
           s.pop() ;
           
           if (knows(M , a , b ) ) {
               s.push(b) ;
           }
           else {
               s.push(a) ;
           }
       }
       
       int ans  = s.top() ;
       
       // step 3 : single element in stack in potential candidite so verify it
       
       int zerocount = 0 ;
       
       for (int i = 0 ; i < n ; i++) {
           if (M[ans][i] == 0) 
               zerocount++ ;
           }
           
           // all zeroes
           if (zerocount != n) {
            return -1 ;
           }
           // column check
           
           int onecount = 0 ;
           
           for (int i = 0 ; i < n ; i++) {
            if (M[i][ans] == 1) 
               onecount++ ;
           }
        
           
           if (onecount != n-1) {
              return -1 ;
           }
           return ans ;
    }
};


