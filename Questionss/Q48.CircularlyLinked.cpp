// CODESTUDIO
// this question also asks to find any small loops within the list but for now we'll only 
// try to find if the list is circular or not

#include<iostream>
using namespace std ;

bool isCircular(Node* head) {

    if(head == NULL ){
        return true ;
    }

    Node* temp = head -> next ;

    while(temp != NULL && temp != head){
        temp = temp -> next ;
    }

    if (temp == head) {
        return true ;
    }
    return false ;
}