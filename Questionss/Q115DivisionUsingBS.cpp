#include<bits/stdc++.h>
using namespace std;

int solve (int a , int b){

    int s = 0 ;
    int e = b ;
    int ans = 0 ;
    int mid = (s+e)/2 ;

    while (s <= e) {
        mid = (s+e)/2 ;
        if (a*mid == b) {
            return mid ;
        }
        if (a*mid > b) {
            e = mid -1 ;
        }
        else {
            ans = mid ;
            s = mid + 1 ;
        }
    }
    return ans ;

}

int main() {
    int a = 7 ;
    int b = 29 ;
    int res = solve (abs(a) , abs(b)) ;
    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        return res ;
    }
    else {
       res = 0 - res ;
       
    }
    cout << res ;
    
   



}