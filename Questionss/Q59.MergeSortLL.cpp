// Merge sort a singly linked lists - CODESTUDIO

#include<iostream>
using namespace std ;

Node* mid_node(Node* head) {

    Node* slow = head ;
    Node* fast = head -> next ;

    while (fast != NULL) {
        slow = slow -> next ;
        fast = fast -> next -> next ;
    }
    return slow ;
}

Node* merge(Node* left , Node* right) {
    // if left part is empty
    if (left == NULL) {
        return right ;
    }
    // if right part is empty
    if (right == NULL) {
        return left ;
    }
    // creating new dummy node with value -1
    Node* temp = new Node(-1) ;
    Node* ans = temp ;

    // merging lists
    while (left != NULL && right != NULL) {
        if (left -> data < right -> data) {
            ans -> next = left ;
            ans = left ;
            left = left -> next ;
        }
        else {
            ans -> next = right ;
            ans = right ;
            right = right -> next ;
        }
    }

    while (left != NULL) {
        ans -> next = left ;
        ans = left ;
        left = left -> next ;
    }

    while (right != NULL) {
        ans -> next = right ;
        ans = right ;
        right = right -> next ;
    }
    // updating the value of head in ans list
    ans = ans -> next ;
    return ans ;
}

Node* merge_sort(Node8 head) {

    // base case
    if (head == NULL || head -> next == NULL) {
        return head ;
    }

    Node* mid = mid_node(head) ;
    Node* left = head ;
    Node* right = mid -> next ;
    mid -> next = NULL ;

    // recursive call
    left = merge_sort(left) ;
    right = merge_sort(right) ;

    // merging both lists
    Node* result = merge(left , right) ;

    return result ; 



}
