// for accessing elements of list we have to traverse upto that element 
// we cannot directly access that element

#include<iostream>
#include<list>
using namespace std;

int main() {
    // initialising a list
    list<int> l ;

    // inserting element at the back of the list
    l.push_back(2) ;
    l.push_back(4) ;
    l.push_back(6) ;

    // inserting element at the front of the list
    l.push_front(1) ;
    l.push_front(3) ;
    l.push_front(5) ;

    // remove a particular element -> TC - O(n)
    l.remove(5) ;

    // remove elemnet from front of the list
    l.pop_front() ;

    // remove elemnet from back of the list
    l.pop_back() ;

    // if list is empty
    cout << "is list empty ? " << l.empty() ;

    // to print all elements of a list
    for (int i : l) {
        cout << i << " " ;
    }
    cout << endl ;

    // size of list
    cout << "size of list " << l.size() << endl ;

    // to copy list into new list
    list<int> n(l) ;

    for (int i : n){
        cout << i << " " ;
    }

    return 0 ;
}
