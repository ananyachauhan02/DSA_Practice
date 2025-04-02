#include <bits/stdc++.h>
using namespace std ;

int ans(int arr[] , int size) {
  int temp = 0 ;
  for(int i = 0 ; i < size ; i++) {
    temp = temp ^ arr[i] ;
  }
   return temp ;
}

int main() {

  int arr[5] = {1 , 2 , 4 , 4 , 2 } ;
  int n = 5 ;
  ans(arr , n) ;
}