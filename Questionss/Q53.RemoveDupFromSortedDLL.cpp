// CODESTUDIO - Remove duplicates from a sorted doubly LL

Node* removeDuplicates(Node* head) {

    if (head == NULL || head -> next == NULL) {
        return head ;
    }

    Node* node1 = head ;
    Node* node2 = head -> next ;

    while (head != NULL) {

        if (node1 -> data == node2 -> data) {
            node1 -> next = node2 -> next ;
            node2 -> next -> prev = node1 ;
            node2 -> next = NULL ;
            node2 -> prev = NULL ;
            node2 = node1 -> next ;
        }

        else {
            node1 = node1 -> next ;
            node2 = node2 -> next ;
        }

        // edge case
        if (node1 -> data == node2 -> data && node2 -> next == NULL) {
            node1 -> next = NULL ;
            node2 -> prev = NULL ;
        }
    }
    return head ;
}