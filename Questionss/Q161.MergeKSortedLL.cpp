// Merge K sorted LL - leetcode , codestudio , gfg

// TC - O(n log k)
// SC - O(k)

class compare {
    public :
    bool operator()(Node* a , Node* b) {
        return a -> data > b -> data ;
    }
};

Node* mergeKlists(vector<Node*> &arr) {

    int k = arr.size() ;
    if (k == 0) {
        return NULL ;
    }

    priority_queue<Node* , vector<Node*> , compare > mini ;

    Node* head = NULL ;
    Node* tail = NULL ;

    for (int i = 0 ; i < k ; i++) {
        if (arr[i] != NULL) {
            mini.push(arr[i]) ;
        }
    }

    while (mini.size() > 0) {
        Node* temp = mini.top() ;
        mini.pop() ;

        if (temp -> next != NULL) {
            mini.push(temp -> next) ;
        }

        if (head == NULL) {
            head = temp ;
            tail = temp ;
        }

        else {
            tail -> next = temp ;
            tail = temp ;
        }
    }

    return head ;

}