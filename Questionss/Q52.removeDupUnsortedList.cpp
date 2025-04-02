// CODESTUDIO : Remove Duplicates From an Unsorted Linked List


// APPROACH - 1 - brute force with TC - O(n^2)
#include<iostream>
using namespace std ;

Node* Remove(Node* head) {

    // empty case
    if(head == NULL) {
        return NULL ;
    }

    Node* nodemain = head ;

    while (nodemain != NULL) {
        Node* curr = nodemain ;
        while (curr -> next != NULL) {
            if (curr -> data == curr -> next -> data) {
                Node* temp = curr -> next ;
                curr -> next = curr -> next -> next ;
                delete(temp) ;
            }
            else {
                curr = curr -> next ;
            }
        }
        nodemain = nodemain -> next ;
    }
    return head 

}

// Approach - 2 - MAPPING

Node* removeNode(Node* head) {

   if (head == NULL) {
    return head ;
   }

   unordered_map <int , bool> visited ;

   Node* prev = NULL;
   Node* curr = head ;

   while (curr != NULL) {
    if(visited[curr -> data] == true) {
        Node* temp = curr ;
        prev -> next = curr -> next ;
        curr -> next = NULL ;
        delete(del) ;
        curr = prev -> next ;
    }

    else {
        visited[curr -> data] = true ;
        prev = curr ;
        curr = curr -> next ;
       

    }
   }
   return head ;

}