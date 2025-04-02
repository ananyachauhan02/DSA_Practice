// Lucky Numbers - gfg

bool solve(int n , int counter) {

    if (counter > n) {
        return true ;
    }

    if (n % counter == 0 ) {
        return false ;
    }

    return solve(n - n/counter , counter + 1) ;
}

bool isLucky(int n) {
    int counter = 2 ;

    return solve(n , counter) ;
}