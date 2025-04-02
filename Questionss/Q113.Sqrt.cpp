// Square root of x - Leetcode

int sqrt(int x) {
    int s = 1 ;
    int e  = x / 2 ;
    int ans = 0 ;
    int mid = (s+e)/2 ;

    while (s <= e) {
        if (mid == x) {
            return x;
        }
        if (mid*mid > x) {
            e = mid -1 ;

        }
        else {
            ans = mid ;
            s = mid + 1 ;
        }
    }
    return ans ;
}