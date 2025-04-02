// Zig zag tree traversal - gfg , codestudio , leetcode

vector<int> ZigZagTraversal(Node* root) {

    vector<int> result ;

    if (root == NULL) {
        return result ;
    }

    queue<Node*> q ;
    q.push(root) ;

    bool leftToRight = true ;

    while(!q.empty()) {
        int size = q.size() ;
        vector<int> ans(size) ;

        for(int i = 0 ; i < size ; i++) {
            Node* currNode = q.front() ;
            q.pop() ;

            int index = leftToRight ? i : size - i - 1 ;
            ans[index] = currNode -> data ;

            if (currNode -> left) {
                ans.push_back(currNode -> left) ;
            }
            if (currNode -> right) {
                ans.push_back(currNode -> right) ;
            }
            
        }
        leftToRight = !leftToRight ;
        for(auto i : ans) {
            result.push_back(i) ;
        }
    }

    return result ;
}