// create binary tree from inorder and postorder traversal - gfg , codestudio

int FindPosition(int in[] , int inorderStart , int inorderEnd , int element , int n) {
    for (int i = inorderStart ; i <= inorderEnd ; i++) {
        if (in[i] == element) {
            return i ;
        }
    }
}

Node* solve (int in[] , int post[] , int inorderStart , int inorderEnd , int &index , int n) {

    // base case
    if (index < 0 || inorderStart > inorderEnd) {
        return NULL ;
    }
    int element = post[index--] ;
    Node* root = new node(element) ;
    int position = FindPosition(in , inorderStart , inorderEnd , element , n) ;

    root -> right = solve(in , post , position + 1 , inorderEnd , index , n) ;
    root -> left = solve(in , post , inorderStart , position - 1 , index , n) ;

    return root ;

}

Node* func(int in[] , int post[] , int n) {

    int postOrderIndex = n - 1 ;
    Node* ans = solve(in , post , 0 , n - 1 , postOrderIndex , n) ;

    return ans ;
}