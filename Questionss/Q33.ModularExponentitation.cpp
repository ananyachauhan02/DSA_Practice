# include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m){
    int result =1;
    while(n>0){
        if(n&1){
            // odd case
            result = (1LL * (result % m) * (x % m))%m;
        }
        x = (1LL * (x%m) * (x%m)%m);
        n = n>>1; // shifting bits --> dividing by 2
    }
    return result;
}