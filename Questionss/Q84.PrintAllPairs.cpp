// print all pairs of an array

#include <bits/stdc++.h>
using namespace std ;

int main() {

  int arr[3] = {1 , 2 , 4  } ;
  int n = 3 ;

  for (int i = 0 ; i < n ; i++ ) {
    for (int j = 0 ; j < n ; j++) {
      cout << arr[i] << ", " << arr[j] << endl ;
    }
  }
  
}