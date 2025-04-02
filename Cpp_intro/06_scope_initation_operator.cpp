#include<iostream>
using namespace std;
int c = 9;
int main(){
    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    c = a+b;
    cout<<"The sum is "<<c<<endl;

    // :: is the scope reservation operator used to print the value of variable defined in the beginning
    cout<<"the global value of c is "<<::c<<endl;
    return 0;       
}

    