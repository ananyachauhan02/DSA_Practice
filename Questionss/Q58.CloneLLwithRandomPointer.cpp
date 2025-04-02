// Clone a linked lists with random pointers - geeks for geeks

#include<iostream>
using namespace std ;

// Approach - 1 - using maps
// TC - O(n) , SC - O(n) 

void insertAtTail (Node* &head , Node* &tail , int value) {

    Node* temp = new Node(value) ;
    if (head == NULL) {
        head = temp ;
        tail = temp ;
    }
    else {
        head -> next = temp ;
        tail = temp ;
    }

Node* copyList(Node* head) {

    // creating a clone list
    Node* clonehead = NULL ;
    Node* clonetail = NULL ;
    Node* temp = head ;

    while (temp != NULL) {
        insertAtTail(clonehead , clonetail , temp -> data) ;
        temp = temp -> next ;
    }

    Node* originalnode = head ; 
    Node* clonenode = clonehead ;
     
    // creating a map
    unordered_map(Node* , Node*) clonemap ;

    // assigning values to clonenodes using map
    while (originalnode != NULL && clonenode != NULL) {
        clonemap[originalnode] = clonenode ;
        originalnode = originalnode -> next ;
        clonenode = clonenode -> next ;
    }

    originalnode = head ;
    clonenode = clonehead ;

    // allocating random pointer
    while (originalnode != NULL) {
        clonenode -> random = clonemap[originalnode -> random] ;
        originalnode = originalnode -> next ;
        clonenode = clonenode -> next ;
    }
    return clonehead ;
    

}

// Approach - 2 - without map by changing links
// TC - O(n) , SC - O(1)

Node *copyList(Node *head) {
    // Step 1: Clone nodes and insert them after original nodes
    Node *current = head;
    while (current != NULL) {
        Node *newNode = new Node(current->data);
        newNode->next = current->next;
        current->next = newNode;
        current = newNode->next;
    }

    // Step 2: Set random pointers for the new nodes
    current = head;
    while (current != NULL) {
        if (current->arb != NULL) {
            current->next->arb = current->arb->next;
        }
        current = current->next->next;
    }

    // Step 3: Separate original and copied lists
    current = head;
    Node *copiedHead = (current != NULL) ? current->next : NULL;
    while (current != NULL) {
        Node *copiedNode = current->next;
        current->next = copiedNode->next;
        current = current->next;
        if (current != NULL) {
            copiedNode->next = current->next;
        }
    }

    return copiedHead;
}


}
