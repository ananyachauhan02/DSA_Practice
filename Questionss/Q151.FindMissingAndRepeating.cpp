// Find missing and repeating elements - gfg , codestudio

pair<int , int> Find(vector<int> arr , int n) {

    int rep = 0 ;
    int miss = 0 ;
    int i = 0 ;
    int j = 1 ;
    

    while (j < n) {
        if (arr[i] != arr[j]) {
            i++ ;
            j++ ;
        }
        else {
            rep = arr[i] ;
            i++ ;
            j++ ;
        }
    }

    int totalSum = n*(n+1)/2 ;
    int sum = 0 ;

    for (int i = 0 ; i < n ; i++) {
        sum += arr[i] ;
    }

    sum = sum - rep ;
    miss = totalSum - sum ;

    pair<int , int> ans = (rep , miss) ;

    return ans ;


}