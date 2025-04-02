// Kth largest sum subarray - codestudio

// approach 1 - TC - O(n^2 logn)

int KthLargest(vector<int> &arr , int k) {

    vector<int> v ;
    int n = arr.size() ;

    for(int i = 0 ; i < n ; i++) {
        int sum = 0 ;
        for(int j = i ; j < n ; j++) {
            sum += arr[j] ;
            v.push_back(sum) ;
        }
    }

    sort(v.begin() , v.end()) ;

    return v[v.size() - k] ;
}

// approach 2 - using min heap - TC - O(n^2)

int kthLargest(vector<int> &arr , int k) {

    int n = arr.size() ;

    for (int i = 0 ; i < n ; i++) {
        int sum = 0 ;
        for (int j = i ; j < n ; j++) {
            sum += arr[j] ;

            if (mini.size() < k) {
                mini.push(sum) ;
            }
            else {
                if (sum > mini.top()) {
                    mini.pop() ;
                    mini.push(sum) ;
                }
            }
        }
    }

    return mini.top() ;
}