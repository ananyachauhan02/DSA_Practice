

int main() {

int n ; 
cin >> n ;

    for (int row = 0 ; row < n ; row ++) {
        // inner loop
        for (int col = 0 ; col < 2 * row + 1 ; col++) {
            if (col%2 == 1) {
                // odd number
                cout << "* " ;
            }
            else {
                // even number
                cout << row+1 ;
            }
        }
        cout << endl ;
    }


}