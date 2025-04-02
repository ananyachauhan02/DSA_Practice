// Add two numbers represented by a Linked Lists - Geeks for Geeks

// TC - O(m+n) , SC - O(max(m , n))

#include <iostream>
using namespace std ;

Node* insertAtTail(Node* head , Node* tail , int value) {

    Node* temp = new Node(value) ;

    if (head == NULL) {
        head = temp ;
        tail = temp ;
        return ;
    }
    else {
        head -> next = temp ;
        tail = temp ;
    }
}

Node* reverse(Node* head) {
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

Node* add (Node* &first , Node* &second) {

    Node* h1 = first ;
    Node* h2 = second ;

    Node* ansHead = NULL ;
    Node* ansTail = NULL ;
    int carry = 0 ;

    while (h1 != NULL || h2 != NULL || carry != 0) {
        int value1 = 0 ;
        if (h1 != NULL) {
            value1 = h1 -> next ;
        }
        if (h2 != NULL) {
            value2 = h2 -> next ;
        }
        int sum = carry + value1 + value2 ;
        int digit = sum % 10 ;
        insertAtTail(ansHead , ansTail , digit) ;
        carry = sum / 10 ;

        if (h1 != NULL) {
            h1 = h1 -> next ;

        }
        if (h2 != NULL) {
            h2 = h2 -> next ;
        }

    }
    return ansHead ;


}

Node* addLL(Node* first , Node* second) {

    first = reverse(first) ;
    second = reverse(second) ;
    Node* ans = add(first , second) ;
    ans = reverse(ans) ;
    return ans ;
}