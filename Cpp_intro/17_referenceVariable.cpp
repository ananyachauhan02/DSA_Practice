#include<iostream>
using namespace std;

void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}

int main(){
/*
    int i = 5;

    // create a ref variable

    int& j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++
    cout<<j<<endl;
    cout<<i<<endl;

*/

    // pass by value - a copy of value of n is created , so no change in value of n

    int n = 5;
    cout<<"before"<<n<<endl;
    update1(n);
    cout<<"after pass by value"<<n<<endl;

    update2(n);
    cout<<"after pass by refernce"<<n<<endl;

    return 0;
}