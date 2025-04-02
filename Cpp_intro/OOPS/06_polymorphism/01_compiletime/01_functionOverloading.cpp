#include<iostream>
using namespace std;

class A {

    public :
    void sayHello() {
        cout << "hello" << endl ;
    }

    void sayHello(char name) {
        cout << "hello" << endl ;
    }

    int sayHello(int n, char name) {
        cout << "hello" << endl ;
        return 1 ;
    }
};


int main(){

    A obj ;
    obj.sayHello() ;

    return 0 ; 
}