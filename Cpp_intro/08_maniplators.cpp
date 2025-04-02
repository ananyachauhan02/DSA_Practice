#include<iostream>
using namespace std;
int main(){
    int a = 34;
    cout<<"The value of a was "<<a<<endl;
    a = 45;
    cout<<"the value of a is "<<a<<endl;

// CONSTANTS in c++

    const int b = 20;  // this is a read only variable, this variable cannot be used
    
// use MANIPLATORS of setw
    int p=3; 
    int q=33; 
    int r=3333;
    cout<<"The value of p is "<<setw(4)<<p<<endl;
    cout<<"The value of q is "<<setw(4)<<q<<endl;
    cout<<"The value of r is "<<setw(4)<<r<<endl;

    return 0;
}