#include<iostream>
using namespace std;

int main(){

    //pointer : it is a data type which stores the value of other data type

    int a = 3 ;
    // creating a pointer
    int *b = &a ;  // b is the address of a present in the memory
    
    // & --->(address of) operator
    

    cout << "The address of a is " << &a << endl ;
    cout << "The address of a is " << b << endl ;

    // * ---> (value at) Dereference of operator

    cout << "The value at address b is " << *b << endl ;

    // pointer to pointer is a type of pointer which stores address of a pointer

    int ** c = &b ;
    cout << c << endl ;
    return 0 ;
}