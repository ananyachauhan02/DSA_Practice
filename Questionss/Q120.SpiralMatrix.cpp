// Spiral Matrix - leetcode

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;

        int total = rows * cols ;
        int count = 0 ;

        int SR = 0 ;
        int SC = 0 ;
        int ER = rows - 1 ;
        int EC = cols - 1 ;
        
        while (count < total) {
            //printing first row (L -> R)
                for (int j = SC ; count<total && j <= EC ; j++) {
                    ans.push_back(matrix[SR][j]) ;
                    count++ ;
                    
                }
                SR++;
                
            
            
            // printing (T -> B)
                for (int i = SR ; count<total && i <= ER ; i++) {
                    ans.push_back(matrix[i][EC]) ;
                     count++ ;
                    
                }
                EC-- ;
               
            
            // printing last row (R -> L)
                for (int i = EC ; count<total && i >= SC ; i--) {
                    ans.push_back(matrix[ER][i]) ;
                    count++ ;
                    
                }
                ER--;
                

            // printing (B -> T) {
                for (int i = ER ; count<total && i >= SR ; i--) {
                    ans.push_back(matrix[i][SC]) ;
                     count++ ;
                    
                }
                SC++ ;
               
            }
            return ans ;
        }
};