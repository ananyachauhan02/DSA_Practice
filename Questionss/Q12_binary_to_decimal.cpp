#include<bits/stdc++.h>
using namespace std;


int binaryToDecimal(int n){
    int ans = 0;
    int i = 0;
    while(n>0){
        int digit = n%10;
        if(digit == 1){
            ans = ans + pow(2,i);
        }
        n = n/ 10;
        i++;}
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
}