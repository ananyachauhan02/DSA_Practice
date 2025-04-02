#include<iostream>
#include<deque> // used for stl deque
using namespace std;

int main() {
    // initalise a deque
    deque<int> d ;

    // insert an element at the last
    d.push_back(2) ;

    // insert an element at the front
    d.push_front(1) ;

    // to print all elements of deque
    for (int i : d) {
        cout << i << " " ;
    }
    cout << endl ;

    // to print a particular element of deque
    cout << "element at 1st index is " << d.at(1) << endl ;

    // to print first element of deque
    cout << "front element is " << d.front() << endl ;

    // to print last element of deque
    cout << "back element is " << d.back() << endl ;

    // size of deque before earsing
    cout << "size of deque before erasing " << d.size() << endl ;

    // how to erase a range of element
    d.erase (d.begin() , d.begin() + 1) ;

    // size of deque after erasing first element
    cout << "size of deque after erasing " << d.size() << endl ;

    // is deque empty or not
    cout << "Is deque d empty or not " << d.empty() << endl ;

    // to remove element from last
    d.pop_back() ;

    // to remove element from front
    d.pop_front() ;

    return 0 ;
}
