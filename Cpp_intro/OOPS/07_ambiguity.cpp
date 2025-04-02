#include<iostream>
using namespace std;

class A {

    public :
    void func() {
        cout << "I'm A" << endl ;
    }

};

class B {

    public :
    void func() {
        cout << "I'm B" << endl ;
    }
};

class C : public A , public B {

};

int main(){

    C obj ;

    // to call func of A
    obj.A :: func() ;

    // to call func of B
    obj.B :: func() ;

    return 0 ;
}