//  Check if Linked List is Palindrome - GEEKS FOR GEEKS

// Approach - 1
// TC - O(n) , SC - O(n)

#include<iostream>
using namespace std ;

bool check(vector<int>arr) {

    int n = arr.size() ;
    int s = 0 ;
    int e = n-1 ;

    while (s<e) {
        if (arr[s] != arr[e]) {
            return 0 ;
        }
        else {
            s++ ;
            e-- ;
        }
    }
    return 1 ;

}

bool isPalindrome(Node* head) {

    Node* temp = head ;
    vector<int> arr ;

    while (temp != NULL) {
        arr.push_back(temp -> data) ;
        temp = temp -> next ;
    }

    return check(arr) ;
}

// Approach - 2
// TC - O(n) , SC - o(n)

void reverse (Node* head) {

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

int count (Node* head) {

    int cnt = 0 ;
    Node* temp = head ;
    while(temp != NULL) {
        cnt++ ;
        temp = temp -> next ;
    }
    return cnt ;
}

Node* middleNode(Node* head) {

    Node* slow = head ;
    Node* fast = head ;

    while (fast != NULL && fast -> next != NULL) {
        fast = fast -> next ;
        slow = slow -> next ;
        if(fast -> next != NULL) {
            fast = fast -> next ;
        }
    }
    return slow ;
}

bool ispalindroma(Node* head) {

    Node* curr = head ;

    Node* mid = middleNode(head) ;
    Node* temp = mid -> next ;
    Node* rev = reverse(temp) ;

    while (rev != NULL) {

        if (curr -> data != rev -> data) {
           return false ;
        }
       
       else {
        rev = rev -> next ;
        curr = curr -> next ;
       }
    }


    return true ;

}