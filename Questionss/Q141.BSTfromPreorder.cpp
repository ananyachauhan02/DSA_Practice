// construct a BST from preorder traversal - leetcode , codestudio , gfg
// TC - O(n) , SC - O(n)

Node* solve (vector<int> &v , int mini , int maxi , int &index) {

    // base case
    if (index > v.size() - 1) {
        return NULL ;
    }

    if (v[index] < mini || v[index] > maxi) {
        return NULL ;
    }

    Node* root = new Node(v[index++]) ;

    root -> left = solve(v , mini , root -> data , index) ;
    root -> right = solve(v , root -> data , maxi , index) ;

    return root ;

}

Node* BST(vector<int>v) {

    int maxi = INT_MAX ;
    int mini = INT_MIN ;

    int index = 0 ;
    return solve(v , maxi , mini , index) ;
}