// search in 2d matrix - leetcode

bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int rows = matrix.size() ;
    int cols = matrix[0].size() ;
    int n = rows*cols ;
    int s = 0 ;
    int e = n - 1 ;
    int mid = s+(e-s)/2 ;

    while (s <= e) {
        int i = mid/cols ;
        int j = mid%cols ;
        int curr = matrix[i][j];
        if (curr == target) {
            return true ;
        }
        if (curr > target) {
            e = mid - 1 ;
        }
        else {
            s = mid + 1 ;
        }
        mid = s+(e-s)/2 ;
    }
    return false ;


}