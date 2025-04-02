#include<bits/stdc++.h>
using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
    return 1;
    else
    return 0;
}

char lowercase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0' && ch<= '9')){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}

bool palindrome(string a){
    int start = 0;
    int end = a.length()-1;
    while(start<end){
        if(a[start] != a[end])
        return 0;
    
    else{
        start++;
        end--;
    }
    }
    return 1;
}

int main(){
    cout<<"enter name : "<<endl;
    string temp = "";
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    for(int i=0;i<temp.length();i++){
        temp[i]=lowercase(temp[i]);
    }

    cout<<"palindrome or not : "<<palindrome(temp)<<endl;

    return 0;

}