#include<iostream>
using namespace std ;

int main() {
    
    int n ;
    cin >> n ;


    for (int row = 0 ; row < n ; row ++) {
        char ch ;
            // inner loop
            for (int col = 0 ; col < row + 1 ; col++) {
                ch = col + 1 + 'A' - 1;
                cout << ch ;
        }

    for (char alphabet = ch ; alphabet > 'A' ;) {
        alphabet = alphabet - 1 ;
        cout << alphabet ;
    }
    cout << endl ;
    }

}