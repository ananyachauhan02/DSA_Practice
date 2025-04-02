// Trailing zeroes factorial

int trailingZeroes(int n) {

    int ans = 0 ;
    int temp = 5 ;

    while (temp <= n) {
        ans = ans + n/temp ;
        temp = temp * 5 ;

    }

    return ans ;
}