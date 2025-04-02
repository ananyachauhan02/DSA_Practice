// Height of binary tree - GFG

int height(struct Node* node)
{
    // base case
    if(node == NULL) {
        return 0 ;
    }

    int h1 = height(root -> left) ;
    int h2 = height(root -> right) ;

    int ans = max(h1 , h1) + 1 ;
    return ans ;


};
