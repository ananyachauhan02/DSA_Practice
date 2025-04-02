//Level Order traversal Line by line - GFG

vector<vector<int>> LeverOrder(Node* root) {

    vector<vector<int>> ans;
    vector<int> v ;

    queue<Node*> q ;
    q.push(root) ;

    while(!q.empty()) {
        int size = q.size() ;
        while (size --) {
            Node* temp = q.front() ;
            q.pop() ;
            v.push_back(temp -> data) ;
            if (temp -> left) {
                q.push(temp -> left) ;
            }
            if (temp -> right) {
                q.push(temp -> right) ;
            }

        }

        ans.push_back(v) ;
        v.clear() ;

    }

    return ans ;
}