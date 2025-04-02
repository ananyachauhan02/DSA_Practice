// Find First and Last Position of Element in Sorted Array - LEETCODE

vector <int> Position(vector<int>arr  , int x , int n) {

    vector<int> ans ;
    int s = 0 ;
    int e = n - 1 ;
    int mid = (s+e) /2 ;
    int ans1 = -1 ;

    while(s<=e) {
        if (arr[mid] == x) {
            ans1 = mid ;
            s = mid + 1 ;
        }
        
    }


}

