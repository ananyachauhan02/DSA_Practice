#include<iostream>
using namespace std;

class Human {

    public :

    int height ;
    int weight ;
    int age ;

    public :
    int getAge() {
        return this -> age ;
    }
    void setWeight(int w) {
        return this -> weight = w ;
    }
};

class Male : public Human{

    public :
    string color ;

    void sleep() {
        cout << "male sleeping"

    }

};


int main(){

    Male object 1 ;
    cout << object1.age << endl ;
    cout << object1.weight << endl ;
    cout << object1.height << endl ;

    cout << object1.color << endl ;
    object1.setWeight(84) ;
    cout << object1.weight << endl ;
    object1.sleep() ;



    return 0 ;
}