// Hollow pyramid 


for (int row = 0 ; row < n ; row++) {
    // for spaces 
    for (int col = 0 ; col < n - row - 1 ; col++ ) {
        cout << " " ;
    }
    // for stars
    for (int col = 0 ; col < row + 1 ; col++) {
        if (col == 0 || col = row ) {
            cout << "* " ;
        }
        else {
            // for every col between first and last 
            // col print spaces
            cout << " " ;
        }
        cout << endl ;
    }
}