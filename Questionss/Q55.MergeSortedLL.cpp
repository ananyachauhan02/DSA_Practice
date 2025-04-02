// Merge two sorted LL - CODEDSTUDIO

#include<iostream>
using namespace std ;

Node* solve (Node* first , Node* second) {

    // first has only one element
    if (first -> next == NULL) {
        first -> next = second ;
        return first ;
    }

    Node* curr1 = first ;
    Node* curr2 = second ;
    Node* forward1 = curr1 -> next ;
    Node* forward2 = NULL ;

    while (curr1 -> next != NULL && curr2 != NULL) {
        if ((curr1 -> data <= curr2 -> data) && (curr2 -> data <= forward1 -> data)) {
            forward2 = curr2 -> next ;
            curr1 -> next = curr2 ;
            curr2 -> next = forward1 ;
            curr1 = curr2 ;
            curr2 = forward2 ; 

        }

        else {
            curr1 = forward1 ;
            forward1 = forward1 -> next ;

            if (forward1 == NULL) {
                curr1 -> next = curr2 ;
            }
            
        }
    }
    return first ;

}

Node* Merge (Node* first , Node* second) {

    // first is empty list
    if (first == NULL) {
        return second ;
    }

    // second is empty list
    if (second == NULL) {
        return first ;
    }

    // first head < second head 
    if (first <= second) {
        solve (first , second) ;
    }

    // second head < first head 
    else {
        solve (second , first) ;
    }

    return first ;
}