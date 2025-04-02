#include<bits/stdc++.h> // this header file includes all the files needed for coding
using namespace std;

int hexaDecimalToDecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for(int i =s-1;i>=0;i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans = ans + x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <='F'){
            ans = ans + x*(n[i] - 'A' + 10);
        }
        x = x*16;
    }
    return ans;
}

int main(){
    string p;
    cin>>p;
    cout<<hexaDecimalToDecimal(p)<<endl;
    return 0;
}
