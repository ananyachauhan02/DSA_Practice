//Inverted triangle

#include<iostream>
using namespace std;
int main(){

    for(int i=0; i<5; i++){
        for (int j =4 ; j>i ; j--){
            cout<<"* ";
        }
        cout<<endl;
        
    }

// approach - 2
    for (int row = 0 ; row < n ; row++) {
        // for spaces
        for (int col = 0 ; col < row ; col++) {
            cout << " ";
        }
        // for stars
        for (int col = 0 ; col < n - row ; col++) {
            cout << "* ";
        }
        cout << endl ;

    }
    return 0;
}