// Missing element of AP - codestudio , gfg

int missing(int arr[] , int n) {

    int ans = -1 ;
    int diff = (arr[n] - arr[0]) / n ;

    for (int i = 1 ; i < n ; i++) {
        if (arr[i] - arr[i-1] != diff) {
            ans = arr[i] - diff ;
        }

    }
    return ans ;
}



