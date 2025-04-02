// codestudio

#include<iostream>
using namespace std ;

// APPROACH - 1
Node* reverseLinkedLists1 (Node* head) {

    if (head == NULL || head -> next == NULL) {
        return head ;
    }

    Node* prev = NULL ;
    Node* curr = head ;
    Node* forward = NULL ;

    while (curr != NULL) {
        forward = curr -> next ;
        curr -> next = prev ;
        prev = curr ;
        curr = forward ;
    }
    return prev ;
}

// Approach - 2
void reverse (Node* &head , Node* curr , Node* prev) {
    // base case
    if (curr == NULL) {
        head = prev ;
        return ;
    }

    // recursive call
    Node* forward = curr -> next ;
    reverse (head , forward , curr) ;
    curr -> next = prev ;

}

Node* reverseLinkedLists2 (Node* head) {
    Node* curr = head ;
    Node* prev = NULL ;
    reverse (head , curr , prev) ;
    return prev ;
}