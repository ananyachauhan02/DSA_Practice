// predecessor and successor in BST - codestudio

// approach - 1 - recursive 
// TC - O(n) , SC - O(n) 
 
void solve (Node* root , int key , int &pred , int &succ) {

    if (root == NULL) {
        return ;
    }

    solve(root -> left , key , pred , succ) ;

    if (root -> data < key ) {
        pred = root -> data ;
    }
    else if (root -> data > key && succ = -1) {
        succ = root -> data ;
    }

    solve(root -> right , key , pred , succ) ;
}

pair<int , int> pred&succ(Node* root , int key) {

    int pred = -1 ;
    int succ = -1 ;

    solve(root , key , succ , pred) ;

    pair<int , int> ans = make_pair(pred , succ) ;

    return ans ;
}

// approach - 2 - iterative 
// TC - O(n) , SC - O(1)

pair<int , int> succ&pred(Node* root , int key) {

// for pred
    Node* temp1 = root ;
    int succ = -1 ;
    int pred = -1 ;

    while (temp1 != NULL) {
        if (temp1 -> data >= key) {
            temp1 = temp1 -> left ;
        }
        else {
            pre = temp1 -> data ;
            temp1 = temp1 -> right ;
        }
    }

// for succ
    Node* temp2 = root ;
    while (temp2 != NULL) {
        if (temp2 -> data <= key) {
            temp2 = temp2 -> right ;
        }
        else {
            succ = temp2 -> data ;
            temp2 = temp2 -> left ;
        }
    }

    pair<int , int> ans = make_pair(pred , succ) ;
    return ans ;


}