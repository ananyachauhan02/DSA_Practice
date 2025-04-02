//Longest Subarray Zero Sum - codestudio 

int sum(vector<int> arr) {

    int sum = 0 ;
    int cnt = 0 ;
    int n = arr.size() ;

    for (int i = 0 ; i < n ; i++) {
        sum = 0 ;
        for (int j = i ; j < n ; j++) {
            sum += arr[j] ;
            cnt = j - i + 1 ;
            if (sum == 0) {
                ans = max(ans , cnt) ;
            } 
        }
    }
    return ans ;
}