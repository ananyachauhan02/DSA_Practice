// Flatten Linked list - Codestudio

# include<iostream>
using namespace std ;

Node* merge (Node* first , Node* second) {

    if (first == NULL) {
        return second ; 
    }
    if (second == NULL) {
        return first ;
    }
    Node* ans = new Node(-1) ;
    Node* temp = ans ;
    while (first != NULL && second != NULL) {
        if (first -> data < second -> data) 
        {
            temp -> child = first ;
            temp = first ;
            first = first -> child ;
        }
        else {
            temp -> child = second ;
            temp = second ;
            second = second -> child ;
        }

    }
    while (first != NULL) {
        temp -> child = first ;
        temp = first ;
        first = first -> child ;
    }

    while (second != NULL) {
        temp -> child = second ;
        temp = second ;
        second = second -> child ;
    }

    return (ans -> child );
}

Node* flatten_LL(Node* head) {

    // base case
    if (head == NULL || head -> next == NULL) {
        return head ;
    }

    Node* down = head ;
    Node* right = flatten_LL(head -> next) ;
    down -> next = NULL ;
    Node* ans = merge(down , right) ;
    return ans ;

}