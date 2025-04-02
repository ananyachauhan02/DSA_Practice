#include<iostream>
using namespace std ;


class Hero {

    private :
    int health ;

    public :
    char level ;
    char *name ;

    // static keyword
    static int timeToComplete ;


    // constructor
    Hero(){
        cout << "Simple Constructor Called" << endl ;
        name = new char[100] ; 
    }

    // parameterised constructor
    Hero( int health ){
        this -> health = health ;
    }
    Hero( int health , char level){
        this -> health = health ;
        this -> level = level ; 
    }

    // copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1] ;
        strcpy(ch , temp.name) ;
        this -> name = ch ;

        cout << "copy constuctor called " << endl ;
        this -> health = temp.health ;
        this -> level = temp.level ;
    }

    void print() {
        cout << endl ;
        cout << " [ name is " << this -> name << " , "
        cout << "health is " << this -> health << " , " ;
        cout << "level is " << this -> level << " ]" ;
        cout << endl << endl ;

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

    void setLevel(char ch){
        level = ch ;
    }

    void setName(char name[]){
        strcpy(this -> name , name) ;
    }

    // Destructor
    ~Hero(){
        cout << "destructor bhai called " << endl ;
    }

    // static function
    static int random(){
        return timeToComplete ;
    }
    
};

// static keyword initialisation
int Hero :: timeToComplete = 5s ;

int main(){

    // object created statically
    Hero Ramesh(10) ;
    

    // dynamically
    Hero *h = new Hero(11) ;
    h -> print() ;

    // parameterised constructor
    Hero temp(22, 'B') ;
    temp.print() ;
   
   // copy constructor
   Hero S(70 , 'C') ;
   S.print() ;
   Hero R(S) ;
   R.print() ;

    cout << "shallow copy " << endl ;


   // Shallow copy
   Hero hero1 ;

   hero1.setHealth(12) ;
   hero1.setLevel('D') ;
   char name[7] = "Babbar" ;
   hero1.setName(name) ;

//    hero1.print() ;

    // use defalut copy constructor
    Hero hero2(hero1) ;
    // hero2.print() ;

    hero1.name[0] = 'G' ;
    hero1.print() ;

    hero2.print() ;

    // copy assignment operator
    cout << "using copy assignment operator " << endl ; 
    hero1 = hero2 ;
    hero1.print() ;
    hero2.print() ;

    // destructor
    cout << "destructor calling " << endl ; 

      // static
    Hero a ;

        // dynamic
    Hero *b = new Hero() ;

        // manually destructor call
    delete b ;

    // static keyword use
    cout << Hero :: timeToComplete << endl ;
    cout << Hero :: random() << endl ;



    return 0 ;
}