// Codestudio 

#include<iostream>
using namespace std ;

void getlength (Node* head) {
    int len = 0 ;
    while (head != NULL) {
        len++ ;
        head = head -> next ;
    }
    return len ;
}

Node * MiddleLL (Node* head) {

    int len = getlength(head) ;
    int ans = len / 2 ;

    
    int cnt = 0 ;
    while(cnt < ans) {
        head = head -> next ;
        cnt++ ;

    } 
    return head ;
}