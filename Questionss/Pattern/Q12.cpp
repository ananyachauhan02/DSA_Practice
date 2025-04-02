// hollow inverted half pyramid

int main() {

    int n;
    cin >> n ;

    for (int row = 0 ; row < n ; row ++) {
        // inner loop
        for (int col = 0 ; col < n - row ; col++){
            if (row == 0 || row == n-1) {
                cout << "*" ;
            }
            else {
                if (col == 0 || col == n- row - 1) {
                    cout << "*" ;
                }
                else {
                    cout << " " ;
                }
            }
            
        }
        cout << endl ; 
    }
}