// LEETCODE - LINKED LISTS CYCLE II

#include<iostream>
using namespace std;

// To detect the intersection node in the loop 
Node* FloydDetect(Node* head) {

    // case : empty loop
    if (head == NULL) {
        return NULL ;
    }

    // initialising nodes
    Node* slow = head ;     // for 1x speed
    Node* fast = head ;     // for 2x speed

    while (slow != NULL && fast != NULL) {

        fast = fast -> next ;

        if (fast != NULL) {
            fast = fast -> next ;

        }
        slow = slow -> next ;
    }
    return slow ;

}

// To find the starting node of loop
Node* detectLoop(Node* head) {

    // initialising nodes
    Node* slow = head ;
    Node* intersection = FloydDetect(head) ;

    // case : no loop exist
    if (intersection == NULL) {
        return NULL ;
    }

    while (slow != intersection) {
        slow = slow -> next ;
        intersection = intersection -> next ;
    }

    return slow ;

}