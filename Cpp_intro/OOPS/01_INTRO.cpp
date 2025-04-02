#include<iostream>
#include "Hero.cpp" // --> including properties of the secondary file hero.cpp
using namespace std;

// creating a class
class hero {

    // properties

    public:     // --> access modifier
    int health ;
    char level ;

    void print(){
        cout << level << endl;
    }

    char getHealth(){
        return health ;
    }

    char getLevel(){
        return level ;
    }

    void setHealth(int h){
        health = h ;
    }

    void setHealth(char ch){
        level = ch ;
    }

} ;

int main(){

    // creating an object
    hero ramesh ;

    // ramesh.health = 70 ;



    cout << " ramesh helath is : " << ramesh.getHealth() << endl ;

    // use setter
    ramesh.setHealth(70) ;
    ramesh.level = 'A' ;



    cout << " level is : " << ramesh.level << endl ;
    return 0;
}