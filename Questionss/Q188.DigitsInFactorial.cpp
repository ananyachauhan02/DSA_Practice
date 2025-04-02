// Digits In Factorial - GFG

int digitsInFactorial(int N) {

    int res = 0 ;

    if (N == 0) {
        return 0 ;

    }

    if (N == 1) {
        return 1 ;
    }

    for (int i = 2 ; i <= N ; i++) {
        res = res + log10(i) ;
    }

    return (floor(res)+1) ;
}
