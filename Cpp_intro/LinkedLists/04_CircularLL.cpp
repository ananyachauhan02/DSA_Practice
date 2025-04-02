#include<iostream>
using namespace std ;

class Node{

    public :
    int data ;
    Node* next ;

    // constructor
    Node(int d) {
        this -> data = d ;
        this -> next = NULL ;
    }

    // destructor
    ~Node() {
        int value = this -> data ;
        if(this -> next != NULL) {
            delete next ;
            next = NULL ;
        }
        cout << "memory is free for node with data " << value << endl ;
    }
};

// insertion of node
void insertNode(Node* &tail , int element , int d) {
    // assuming that the leement is present in the list

    // empty list 
    if(tail == NULL) {
        Node* newNode = new Node(d) ;
        tail = newNode ;
        newNode -> next = newNode ;
    }

    // non empty list
    // assuming that the element is present in the lists

    else{
        Node* curr = tail ;

        while(curr -> data != element){
        curr = curr -> next ;
        }

        // element found -> curr is representing element wala node
    Node* temp = new Node(d) ;
    temp -> next = curr -> next ;
    curr -> next = temp ;
    }
}

// printing node
void print(Node* tail) {
    
    Node* temp = tail ;

    // if list is empty
    if (tail == NULL) {
        cout << " list is empty " << endl ;
        return ;
    }
    
    do {
        cout << tail -> data << endl ;
        tail = tail -> next ;

    }
    while (tail != temp)
    cout << endl ;
}

// deletion of node
void deleteNode(Node* &tail , int value) {

    // empty list
    if (tail == NULL) {
        cout << "list is empty " << endl ;
    }
    // non empty list
    // assuming that "value" is present in the lists 
    else {
        Node* prev = tail ;
        Node* curr = prev -> next ;

        while(curr -> data != value) {
            prev = curr ;
            curr = curr -> next ;
        }

        prev -> next = curr -> next ;

    // if only one node is present in LL
    if (curr == prev) {
        tail == NULL ;
    }

    // if the list has more that 2 nodes
    else if (tail == curr) {
            tail = prev ;
        }
        curr -> next = NULL ;
        delete curr ;


    }

}

int main() {

    Node* tail = NULL ;

    insertNode(tail , 5 , 3) ;
    print(tail) ;

    insertNode(tail , 3 , 5) ;
    print(tail) ;

    insertNode(tail , 5 , 7) ;
    print(tail) ;

    insertNode(tail , 7 , 9) ;
    print(tail) ;

    insertNode(tail , 5 , 6) ;
    print(tail) ;

    deleteNode(tail , 3) ;
    print(tail) ;

    deleteNode(tail , 10) ;
    print(tail) ;

    deleteNode(tail , 6) ;
    print(tail) ;

    return 0 ;
}