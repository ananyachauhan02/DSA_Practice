// TYPECASTING

#include<iostream>
using namespace std;
int main(){
    int a = 23;
    float b = 45.45;

    // implicit typecasting - complier does on it's own
    float result1 = a + b ; 
    int result2 = a + b ;
    cout << result1 << endl ;
    cout << result2 << endl ;

    // explicit typecasting
    cout<<(float)a<<endl;
    cout<<(int)b<<endl;
    cout<<float(a)<<endl;
    cout<<int(b)<<endl;
    //int c = int b;

    cout<<a+b<<endl;
    cout<<a + int(b)<<endl;
    cout<<a + (int)b<<endl;
    return 0;
}