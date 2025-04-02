#include<iostream>
using namespace std;

int main(){
    int i =5;
    int *p = &i;
    int **p2 = &ptr;


    cout << "printing p " << p << endl;
    cout << "address of p " << &p << endl;
     

    // printing i
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    // printing address of i
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    // printing  address of p
    cout << &p << endl;
    cout << p2 << endl;


    return 0;
}