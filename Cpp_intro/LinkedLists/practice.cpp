#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    // constructor
    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node() {
        int value = this -> data;

        if (this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
    }

};



// insertion in Linked List

void insertionLL(Node* &head, int data) {
    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;
}



// printing a linked list

void print(Node* &head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;

}

void insertionAtTail(Node* &tail, int data){

    Node* temp = new Node(data) ;

    tail -> next = temp;
    tail = tail -> next;


}

void insertAtMiddle(Node* mid1, Node* mid2, int data){

    Node* temp = new Node(data);

    mid1 -> next = temp;
    temp -> next = mid2;
    mid1 = mid1 -> next;
    
}



int main() {

    Node* node1 = new Node(10);

    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node* head = node1; 
    print(head);


    insertionLL(head , 12);
    print(head);

    insertionLL(head , 22);
    print(head);

    return 0;
}






// if linked list is circular or not


