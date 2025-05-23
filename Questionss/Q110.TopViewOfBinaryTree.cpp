// TOP VIEW OF BINARY TREE - GFG CODESTUDTIO leetcode

vector<int> TopView(Node* root) {

    map<int , int> TopNode ;
    queue<pair<Node* , int> > q ;
    q.push(make_pair(root , 0)) ;

    vector<int> ans ;

    while(!q.empty()) {
        pair<Node* , int> temp = q.front() ;
        q.pop() ;
        Node* frontNode = temp.first ;
        int hd = temp.second ;

        if (TopNode.find(hd) == TopNode.end()) {
            TopNode[hd] = frontNode -> data ;
        }

        if (frontNode -> left) {
            q.push(make_pair(frontNode -> left , hd -1 ) );
        }

        if (frontNode -> right) {
            q.push(make_pair(frontNode -> right , hd+1)) ;
        }
    }

    for(auto i : TopNode) {
        ans.push_back(i.second) ;
    }

    return ans ;



}