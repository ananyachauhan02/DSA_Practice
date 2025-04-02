// Sort linked list of 0s 1s 2s - CODESTUDIO

// First approach by data replacement 
// TC - O(n) , SC - O(1)

Node* sortList (Node* head) {

    int zeroCount = 0 ;
    int oneCount = 0 ;
    int twoCount = 0 ;

    Node* temp = head ;

    while (temp != NULL) {
        if(temp -> data == 0) {
            zeroCount++ ;
        }
        else if (temp -> data == 1) {
            oneCount++ ;
        } 
        else if (temp -> data == 2) {
            twoCount++ ;
        }
        temp = temp -> next ;
    }

    temp = head ;
    while (temp != NULL) {
        if (zeroCount != 0){
            temp -> data = 0 ;
            zeroCount-- ;
        }
        else if (oneCount != NULL) {
            temp -> data = 1 ;
            oneCount-- ;
        }
        else if (twoCount != NULL) {
            temp -> data = 2 ;
            twoCount-- ;
        }
        temp = temp -> next ;
    }
    return head ;
}

// Second approach without data replacement 
// TC - O(n) , SC - O(1)
void insertAtTail (Node* &head , Node* curr) {
    tail -> next = curr ;
    curr = tail ;
}

Node* sortlist(Node* head) {

    // creating three dummy lists
    Node* headone = new Node(-1) ;
    Node* tailone = headone ;
    Node* headtwo = new Node(-1) ;
    Node* tailtwo = headtwo ;
    Node* headthree = new Node(-1) ;
    Node* tailthree = headthree ;

    Node* curr = head ;
    
    while (curr != NULL) {

        if (curr -> data == 0) {
            insertAtTail(tailone , curr) ;
        }

        else if (curr -> data == 1) {
            insertAtTail(tailtwo , curr) ;
        }

        else if (curr -> data == 2) {
            insertAtTail(tailthree , curr);
        }
        curr = curr -> next ;
    }

    // merging the lists
    if(headtwo -> next != NULL) {
        tailone -> next = headtwo -> next ;
    }
    else {
        tailone -> next = headthree -> next ;
    }

    //assigning new head
    head = headone -> next ;

    // deleteing nodes 

    delete(headone) ;
    delete(headtwo) ;
    delete(headthree) ;

    return head ;



}