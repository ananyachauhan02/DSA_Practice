// CODESTUDIO - Detect and remove loop in linked lists

#include<iostream>
#include<map>
using namespace std ;

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

// INSERTION OF NODE AT HEAD
void InsertionAtHead(Node* &head , int d){

    // new node create
    Node* temp = new Node(d) ;
    temp -> next = head ;
    head = temp ;

}

// INSERTION OF NODE AT TAIL
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

// INSERTION OF NODE AT A POSITION
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

// Approach - 1 for detection of loop
// TC = O(n) , SC = O(1)
bool detectLoop(Node* head) {

    if(head == NULL) {
        return false ;
    }

    map <Node* , bool> vistied ;

    Node* temp = head ;

    while (temp != NULL) {

        // cycle is present
        if(visited[temp] == true) {
            cout << "Present on element " << temp -> data << " " << endl ;
            return true ;
        }

        vistied[temp] = true ;
        temp = temp -> next ;
    }
    return false ;

}

// Approach - 2 for detection of loop
// TC = O(n) , SC = O(1) 
Node* floydDetectLoop (Node* head) {

    if(head == NULL) {
        return NULL ;
    }

    Node* slow = head ;
    Node* fast = head ;

    while(slow != NULL && fast != NULL) {
        
        fast = fast -> next ;
        if(fast != NULL){
            fast = fast -> next ;
        }
        slow = slow -> next ;
    if (slow == fast) {
        cout << "present at " << slow -> data << endl ;
        return slow ;
    }

    }

    return NULL;

}

// to get starting node of loop
Node* getStartingNode(Node* head) {

    if(head == NULL) {
        return NULL ;
    }

    Node* intersection = floydDetectLoop(head) ;

    if(intersection == NULL) {
        return NULL ;
    }

    Node* slow = head ;

    while (slow != intersection) {
        slow = slow -> next ;
        intersection = intersection -> next ;
    }

    return slow ;
}

// to remove loop
Node* removeLoop(Node* head) {

    if(head == NULL) {
        return ;
    }


    Node* startofLoop = getStartingNode(head) ;
    Node* temp = startofLoop ;

    if(startofLoop == NULL) {
        return head ;
    }

    while(temp -> next != startofLoop) {
        temp = temp -> next ;
    }

    temp -> next = NULL ;
}

int main() {

    Node* node1 = new Node(10) ;
    
    Node* head = node1 ;
    Node* tail = node1 ;

    insertAtTail(tail , 12) ;
    insertAtTail(tail , 15) ;
    insertAtPosition(tail , head , 4 , 22) ;

    tail -> next = head -> next ;
    cout << node1 -> data << endl ; // prints value of Node1
    cout << node1 -> next << endl ; // prints address of next node

    if (floydDetectLoop(head) != NULL) {
        cout << "cycle is present " << endl ;
    }
    else {
        cout << "no cycle " << endl ;
    }

    Node* loop = getStartingNode(head) ;
    cout << "loop starts at " << loop -> data << endl ;
    
    removeLoop(head) ;
    print(head) ;

    return 0 ;

} 