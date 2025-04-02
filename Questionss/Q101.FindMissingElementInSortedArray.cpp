// Find missing element in a sorted array - practice question

int missing(int arr[] , int n) {

    int s = 0 ;
    int e = n - 1 ;
    int mid = (s + e) / 2 ;

    int ans = -1 ;

    while(s <= e) {
        int diff = arr[mid] - mid ;
        if (diff == 1) {
            s = mid + 1 ;
        }
        else {
            ans = mid ;
            e = mid - 1 ;

        }
        mid = s + (e-s)/2 ;
    }

    return ans+1 ;
}




