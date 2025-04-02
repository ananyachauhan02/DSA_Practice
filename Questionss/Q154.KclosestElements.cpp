// Find K closest elements - leetcode

vector <int> findClosestElements(vector<int> arr , int k , int x) {

    int n = arr.size() ;
    int i = 0 ;
    int j = n-1 ;

    while (j < n) {
        int left = x - arr[i] ;
        int right = arr[j] - x ;

        if (left < right) {
            j-- ;
        }
        else if (right < left) {
            i-- ;
        }

        else {
            if (arr[i] > arr[j]) {
                i++ ;
            }
            else {
                j-- ;
            }
        }
    }

    while (i <= j) {
        ans.push_back(arr[i++]) ;
    }

    return ans ;
}