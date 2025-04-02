// pyramid 

#include<iostream>
using namespace std;


int main(){

// approach - 1

    for (int i = 0 ; i < 5 ; i++){
        for(int j = 0; j< 5 ; j++){
          if(j < 5 - i){
              cout << " ";
          }
          else{
              cout << "* ";
          }
        }
        cout << endl;
    }

    

// approach - 2

    for (int row = 0 ; row < n ; row++) {
        // for spaces
        for(int col = 0 ; col < n - row - 1 ; col++) {
            cout << " " ;
        }
        // for stars 
        for (int col = 0 ; col < row + 1 ; col++) {
            cout << "* " ;
        }
        cout << endl ;
    }



    return 0;
}