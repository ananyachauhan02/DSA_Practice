#include<iostream>
using namespace std;
int main(){
    int a = 6 , b=5;

    // ARITHMATIC OPERATORS
    cout<<" a + b : "<< a+b<<endl;
    cout<<" a - b : "<< a-b<<endl;
    cout<<" a * b : "<< a*b<<endl;
    cout<<" a / b : "<< a/b<<endl;
    cout<<" a  % b : "<< a%b<<endl;
    cout<<" a++: "<< a++<<endl;
    cout<<" a--: "<< a--<<endl;
    cout<<" ++a : "<< ++a<<endl;

    // comparision OPERATORS
    cout<< "a==b is "<< (a==b)<<endl;
    cout<< "a!=b is "<< (a!=b)<<endl;
    cout<< "a<=b is "<< (a<=b)<<endl;
    cout<< "a>=b is "<< (a>=b)<<endl;
    cout<< "a>b is "<< (a>b)<<endl;
    cout<< "a<b is "<< (a<b)<<endl;

    // LOGICAL OPERATOR
    cout<< "a==b && a>b is "<< ((a==b)&& (a>b) )<<endl;
    cout<< "a==b || a>b is "<< ((a==b) || (a>b))<<endl;
    cout<< "!(a==b) is "<< !(a==b)<<endl;

    // BITWISE OPERATOR
    int a  = 3 ;
    int b = 2 ;
    cout << a & b << endl ;
}