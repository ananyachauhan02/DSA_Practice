// Printing ascaii values of a string

#include<bits/stdc++.h>
using namespace std;

int main(){
string f;
getline(cin,f);
int size = f.length();
 int sum = 0;
 for(int i=0;i<size;i++){
    if(f[i]!=' '){
    sum = sum + int(f[i]);}
   }
    cout<<sum;
    return 0;
}