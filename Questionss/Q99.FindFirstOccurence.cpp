// find first occurence of element in sorted array

#include<bits/stdc++.h>
using namespace std ;

int main() {
    int arr[7] = {10 , 20 , 30 , 30 , 30 , 40 , 50} ;
    int n = 7 ;
    int k = 30 ;

    int s = 0 ;
    int e = n-1 ;
    int ans = 0 ;
    int mid = (s+e)/2 ;
   
    while(s <= e){
        
        if(k == arr[mid]) {
            ans = mid ;
            e = mid - 1;
            
        }
        else if (k > arr[mid]) {
            s = mid + 1 ;
        }
        else if(k < arr[mid]){
            e = mid - 1;
        }
        
        mid = (s+e)/2 ;

    }
    cout << ans ;
    
}
