#include<iostream>
using namespace std ;


class hero {

    public :
    int health ;
    char level ;

    void print() {
        cout << level << endl ;
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
    
};

int main(){
     
     // static alloctaion
     hero a;
     a.setHealth(80) ;
     a.setLevel('B') ;

     cout << "level is : " << a.level << endl ;
     cout << "health is : " << a.getHealth() << endl ;

     // dynamically
     hero *b = new hero ;
     b -> setLevel('A') ;
     b -> setHealth(70) ;
     cout << "level is : " << (*b).level << endl ;
     cout << "helath is : " << (*b).getHealth << endl ;

     cout << "level is : " << b -> level << endl ;
     cout << "health is : " << b -> getHealth() << endl ;


     return 0 ;
}