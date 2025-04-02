#include<bits/stdc++.h>
using namespace std;
vector<int>ans(vector<int>v1,int m,vector<int>v2,int n){
    for(int i=0;i<n;i++){
        v1[m+i]=v2[i];
    }
    sort(v1.begin(), v2.end());
}


int main(){
    vector<int>v1;
    vector<int>v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(0);

    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);
    int m = 3;
    int n =3;
    
    
    vector<int>v = ans(v1,m,v2,n);
    


    return 0;
}