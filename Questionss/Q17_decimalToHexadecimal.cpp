#include<bits/stdc++.h>
using namespace std;

string decimalTohexadecimal(int n){
    int x =1;
    string ans = "";
    while(x<=n)
    x = x*16;
    x = x/16;

while(x>0){
    int lastDigit = n/x;
    n = n - lastDigit*x;
    x = x/16;
    
    if(lastDigit <= 9)
    ans = ans + to_string(lastDigit);
    else{
        char c = 'A' + lastDigit - 10;
        ans.push_back(c);
    }


}
return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimalTohexadecimal(n)<<endl;
    return 0;
}