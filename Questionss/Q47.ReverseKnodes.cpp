// CODESTUDIO

#include<iostream>
using namespace std ;

int getLength(Node* head) {

    int len = 0 ;

    while (head != NULL) {
        len++ ;
        head = head -> next ;
    }
    return len ;

}

Node* KReverse(Node* head) {

    // base case
    if (head == NULL) {
        return head ;
    }

    // reverse nodes
    Node* curr = head ;
    Node* prev = NULL ;
    Node* Next = NULL ;
    int cnt = 0 ;
    int len = getLength(head) ;

    while (head != NULL && cnt < k) {
        Next = curr -> next ;
        curr -> next = prev ;
        prev = curr ;
        curr = Next ;
        cnt++ ;

    }

    // legth after k nodes
    len = len - k ;

    // recursive call
    if (Next != NULL && len >= k) {
        head -> next = KReverse(Next , k) ;
    }
    else{
        head -> next = curr ;
    }

    return prev ;
}