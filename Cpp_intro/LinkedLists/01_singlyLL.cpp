#include<iostream>
using namespace std;

class Node {

    public :
    int data ;
    Node* nextNode ;

    // using constructor
    Node(int data) {
        this -> data = data ;
        this -> next = NULL ;
    }

};

int main() {

    Node* node1 = new Node(10) ;
    cout << node1 -> data << endl ; // prints value of Node1
    cout << node1 -> next << endl ; // prints address of next node

    return 0 ;
}