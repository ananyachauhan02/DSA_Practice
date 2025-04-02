#include<iostream>
using namespace std;

class Node{

    public :
    int data ;
    Node* next ;

    // constructor
    Node(int data) {

        this -> data = data ;
        this -> next = NULL ;

    }

    // destructor
    ~Node() {
        int value = this -> data ;
        // memory free
        if(this -> next != NULL){
            delete next ;
            this -> next = NULL ;
        }
        cout << "memory is free from for node with data " << value << endl ;
    }


};

// CODE FOR INSERTION OF NODE AT HEAD
void InsertionAtHead(Node* &head , int d){

    // new node create
    Node* temp = new Node(d) ;
    temp -> next = head ;
    head = temp ;

}


// CODE FOR INSERTION OF NODE AT TAIL
void InsertionAtTail(Node* &tail , int d){

    // create new node
    Node* temp = new Node(d) ;
    tail -> next = temp ;
    tail = tail -> next ;
    
}

// traversing a linked lists
void print(Node* &head){

    Node* temp = head ;

    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl ;
}

// CODE FOR INSERTION OF NODE AT A POSITION
void InsertAtPosition(int position , int d) {

    // insert at starting
    if(position==1){
        InsertAtHead(head,d)
        return;
    }

    Node* temp = head ;
    int cnt = 1 ;

    while(cnt < position - 1){
        temp = temp -> next ;
        cnt++ ;

    }

    // creating a node for d
    Node* nodeToInsert = new Node(d) ;
    nodeToInsert -> next = temp -> next ;
    temp -> next = nodeToInsert ;
}

// CODE FOR DELETION OF A NODE
void deleteNode(int position , Node* & head){

    // deleting start node
    if(position == 1){
        Node* temp = head ;
        head = head -> next ;
        // memory free start node
        temp -> next = NULL ;
        delete temp ;
    }

    // deleting middle or last node
    else{
        Node* curr = head ;
        Node* prev = NULL ;

        int cnt = 1 ;
        while(cnt < position) {
            prev = curr ;
            curr = curr -> next ;
            cnt++ ;
        }

        prev -> next = curr -> next ;
        curr -> next = NULL ;
        delete curr ;

    }

}


int main() {

    // create a new node
    Node* node1 = new Node(10) ;

    // head and tail pointed to node1 
    Node* head = node1 ;
    Node* tail = node1 ;
    print(head) ;

    InsertionAtTail(head , 12) ;

    print(head) ;

    InsertionAtTail(head , 15) ;

    print(head) ;

    InsertAtPosition(head , 3 , 22) ;

    print(head) ;

    cout << "head " << head -> data << endl ;
    cout << "Tail " << tail -> data << endl ;

    deleteNode(1 , head) ;
    print(head) ;




    return 0 ;


}

