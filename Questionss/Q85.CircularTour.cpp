// Circular tour - GFG

int tour(petrolPump p[] , int n) {

    int balance = 0 ;
    int defecit = 0 ;
    int start = 0 ;

    for (int i = 0 ; i < n ; i++) {
        balance = balance + p[i].petrol - p[i].distance ;
        if (balance < 0) {
            defecit = defecit + balance ;
            start = i + 1 ;
            balance = 0 ;
        }
    }

    if (defecit + balance = 0 ) {
        return start ;
    }
    else {
        return -1 ;
    }
}