// LEETCODE - Remove Duplicates from Sorted List

#include<iostream>
using namespace std ;

Node* deleteDuplicates(Node* head) {

    // list is empty
    if (head == NULL) {
        return NULL ;
    }

    // only one node is present in the list 
    if (head -> next = NULL) {
        return head ;
    }

    // more than one node is present in the list
    Node* curr = head ;

    while (curr -> next != NULL) {
        if (curr -> data == curr -> next -> data) {
            Node* nodeToDelete = curr -> next ;
            curr -> next = curr -> next -> next ;
            delete(nodeToDelete) ;
        }

        else {
            curr = curr -> next ;
        }
    }
    return head ;


}