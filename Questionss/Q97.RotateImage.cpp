// ROTATE IMAGE - LEETCODE
// TC - O(n) , SC - O(1)

void vector<int>matrix(vector<vector<int>> &matrix) {

    int row = matrix.size() ;
    int col = matrix[0].size() ;

    // taking transpose of matrix
    for(int i = 0 ; i < row ; i++) {
        for(int j = i ; j < col ; j++) {
            swap(matrix[i][j] , matrix[j][i]) ;
        }
    }

    // reversing the rows
    for(int i = 0 ; i < row ; i++) {
        reverse(begin(matrix[i]) , end(matrix[i])) ;
    }
}
