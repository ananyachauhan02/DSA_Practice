// Count BST nodes in a given range - gfg
// TC - O(n) , SC - O(h)

void solve(Node* root , int l , int h , int &mini , int &maxi , int &cnt) {

    // base case 
    if (root == NULL) {
        return ;
    }

    if (root -> data < mini && root -> data > maxi) {
        return NULL ;
    }

    solve(root -> left , l , h , mini , root -> data , cnt) ;
    if (l <= root -> data && root -> data <= h) {
        cnt++ ;
    }
    solve(root -> right , l , h , root -> data , maxi , cnt) ;

}

int getCount(Node* root , int l , int h) {

    int mini = INT_MIN ;
    int maxi = INT_MAX ;
    int cnt = 0 ;

    solve(root , l , h , mini , maxi , cnt) ;

    return cnt ;

}