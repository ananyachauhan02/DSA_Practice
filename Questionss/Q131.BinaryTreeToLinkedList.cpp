// Flatten Binary tree to linked Lists - leetcode , codestudio , gfg
// approch - morris traversal - SC = O(1) , TC - O(n)

void flatten(Node* root) {

    Node* curr = root ;

    while (curr != NULL) {
        if (curr -> left) {
            Node* pred = curr -> left ;
            while (pred -> right) {
                pred = pred -> right ;
            }
            pred -> right = curr -> right ;
            curr -> right = curr -> left ;
            curr -> left = NULL ;
        }
        curr = curr -> right ;
    }
}