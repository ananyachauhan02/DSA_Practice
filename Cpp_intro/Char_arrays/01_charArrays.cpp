#include<iostream>
using namespace std;

int main() {
    char name[200] ;
    cout << "enter your name : " << endl ;
    cin >> name ;

    cout << "your name is  " << name << endl ;

    // to print a line in input 
    cin.getline(ch , 200) ;
    cout << "line output is " << name << endl ;

    // to print length of string
    int len = findlength(ch , 100) ;
    cout << "length " << len << endl ;
    cout << "length " << strlen(ch) << endl ;


    for (int i = 0 ; i < 10 ; i++) {
        cout << "At index " << i << " " << name[i] << endl ;
    }

   


    return 0 ;
}