// minimize heights - gfg


int getMinDiff(int arr[] , int n , int k) {

    sort(arr , arr+n) ;

    int diff = arr[n] - arr[0] ;

    for (int i = 1 ; i < n ; i++) {
        if (arr[i] - k < 0) {
            continue ;
        }

        int maxi = max(arr[i-1]+k , arr[n-1]-k) ;
        int mini = min(arr[0]+k , arr[i]-k) ;
        diff = min (diff , maxi-mini) ;
    }

    return diff ;

}