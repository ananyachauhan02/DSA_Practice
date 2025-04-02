// Max rectangle - GFG
// TC - O(n)

class Solution{
    private : 
    
    vector<int> nextSmallerElement(int* arr , int n) {
        
        vector<int> ans(n) ;
        stack<int> s;
        s.push(-1) ;
        
        for (int i = n-1 ; i >= 0 ; i--) {
            int curr = arr[i] ;
            
            while (s.top() != -1 && arr[s.top()] > curr) {
                s.pop() ;
            }
            ans[i] = s.top() ;
            s.push(i) ;
        }
        return ans ;
        
    }
    
    vector<int> prevSmallestElement(int* arr , int n) {
        
        vector<int> ans(n) ;
        stack<int> s ;
        s.push(-1) ;
        
        for (int i = 0 ; i < n ; i++) {
            int curr = arr[i] ;
            
            while (s.top() != -1 && arr[s.top()] >= curr ) {
                s.pop() ;
                
            }
            ans[i] = s.top() ;
            s.push(i) ;
        }
        return ans ;
        
    }
    
    int LargerstRectnagularArea(int* heights , int n) {
        
       // int n = heights.size() ;
        
        vector<int> next ;
        next = nextSmallerElement(heights , n) ;
        
        vector<int> prev ;
        prev = prevSmallestElement(heights , n) ;
        
        int area = 0 ;
        
        for (int i = 0 ; i < n ; i++) {
            int l = heights[i] ;
            
            if (next[i] == -1) {
                next[i] = n ;
            }
            
            int b = next[i] - prev[i] - 1 ;
            
            int newArea = l*b ;
            area = max(area , newArea) ;
        }
        
        return area ;
        
    }
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        // step 1 : compute area for first row 
        
        int area = LargerstRectnagularArea(M[0] , m) ;
        
        // for remaining rows
        for (int i = 1 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                
                // row update : by adding previous values
                if (M[i][j] != 0)
                M[i][j] = M[i][j] + M[i-1][j] ;
                
                else 
                    M[i][j] = 0 ;
            }
                
                // entire row is updated now
                area = max(area , LargerstRectnagularArea(M[i] , m)) ;
            
        }
        return area ;
        
    }
};



