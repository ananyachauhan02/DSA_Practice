// Exactly 3 Divisors - gfg

bool isPrime (int n) {

    for (int i = 2 ; i <= sqrt(n) ; i++) {
        if (n % i == 0) {
            return false ;
        }
    }

    return true ;
}

int mainFunc(int N) {

    int res = 0 ;
    for (int i = 2 ; i*i <= N ; i++) {
        if (isPrime(i) && i*i <= N) {
            res++ ;
        }
    }

    return res ;
}