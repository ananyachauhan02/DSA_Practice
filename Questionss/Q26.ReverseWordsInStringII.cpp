#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
    int start = 0;
    int end = s.length()-1;
    while(start<=end){
        swap(s[start++],s[end--]);
    }
}

char arrange(string ch){
    int temp = 0;

    for(int i=0;i<ch.length();i++){
        if(ch[i] != ' ' || i==ch.length()){
            int e = i-1;
            reverse(ch);
            temp = i+1;
        }
       
    }
    return temp;
}


int main(){

    string s;
    cout<<"enter : "<<endl;
    cin>>s;
    cout<<arrange(s)<<endl;

    return 0;
}