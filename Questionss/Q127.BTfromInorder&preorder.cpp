// Binary tree from inorder and preorder traversal - gfg , codestudio

int FindPosition(int in[] , int inorderStart , int inorderEnd , int element) {
    for(int i = inorderStart ; i <= inorderEnd ; i++) {
        if (in[i] == element) {
            return i ;
        }
    }
}

Node* solve (int &index , int inorderStart , int inorderEnd , int in[] , int pre[] , int n) {

    // base case
    if (index >= n || inorderStart > inorderEnd) {
        return NULL ;
    }

    int element = pre[index++] ;
    Node* root = new node(element) ;
    int position = FindPosition(in , inorderStart , inorderEnd , element) ;

    // recursive call
    root -> left = solve(index , inorderStart , position - 1 , in , pre , n) ;
    root -> right = solve(index , position + 1 , inorderEnd , in , pre , n) ;

    return root ;

}

Node* func (int in[] , int pre[] , int n) {
    int preOrderIndex = 0 ;
    Node* ans = solve(preOrderIndex , 0 , n - 1 , in , pre , n) ;
    return ans ;
}