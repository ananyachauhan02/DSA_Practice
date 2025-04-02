// peak index in a mountain array - leetcode

int peak(vector<int>arr) {

    int n = arr.size() ;
    int s = 0 ;
    int e = n - 1 ; 

    while (s < e) {
        int mid = (s+e)/2 ;
        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1 ;
        }
        else {
            e = mid ;
        }
    }
    return s ;
}