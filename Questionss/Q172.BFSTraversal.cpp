// BFS in a graph - codestudio

void prepareadjList(unordered_map<int , set<int>> &adjList , vector<pair<int, int>> &edges) {

    for (int i = 0 ; i < edges.size() ; i++) {

        int u = edges[i].first ;
        int v = edges[i].second ;

        adjList[u].insert[v] ;
        adjList[v].insert[u] ;

    }

}

void bfs (unordered_map<int , set<int> > &adjList , unordered_map<int , bool> isVisited , vector<int> &ans , int node) {

    queue<int> q ;
    q.push(node) ;

    visited[node] = 1 ;

    while (!q.empty()) {
        int frontNode = q.front() ;
        q.pop() ;

        // store front node in ans 
        ans.push_back(frontNode) ;

        // traverse all neighbours of frontNode
        for (auto i : adjList[frontNode]) {
            if (!visited[i]) {
                q.push(i) ;
                visited[i] = 1 ;
            }
        }
    }

}

vector<int> BFSTraversal(int vertex , vector<pair<int ,int>> edges) {

    unordered_map<int , set<int>> adjList ;
    vector<int> ans ;
    unordered_map<int , bool > visited ;

    // prepare adjcency list

    prepareadjList(adjList , edges) ;


    // traverse all components of graph
    for (int i = 0 ; i < vertex ; i++) {
        if (! visited[i]) {
            bfs(adjList , visited , ans , i) ;
        }
    }


    return ans ;

}