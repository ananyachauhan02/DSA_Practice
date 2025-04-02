// topological sort - codestudio

// TC - O(n+e) , SC - O(n+e)


// using dfs
#include <bits/stdc++.h> 

void topoSort(int node , vector<bool>&visited , stack<int> &s , unordered_map<int , list<int>> & adj) {
    visited[node] = 1 ;

    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            topoSort(neighbour, visited, s, adj);
        }
    }

    s.push(node) ;
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // create adj list

    unordered_map<int , list<int> > adj ;
    for (int i = 0 ; i < e ; i++) {
        int u = edges[i][0] ;
        int v = edges[i][1] ;

        adj[u].push_back(v) ;
    }

    // call dfs topological sort until fucntion for all components
    vector<bool> visited(v) ;
    stack<int> s;

    for (int i = 0 ; i < v ; i++) {
        if (!visited[i]) {
            topoSort(i , visited , s , adj) ;
        }
    }

    vector<int> ans ;

    while (!s.empty()) {
        ans.push_back(s.top()) ;
        s.pop() ;
    }
    return ans ;


}


// KAHN'S ALGORITHM (using bfs)

#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // create adj list
    unordered_map<int , list<int> > adj ;
    for (int i = 0 ; i < e ; i++) {
        int u = edges[i][0] ;
        int v = edges[i][1] ;

        adj[u].push_back(v) ;
    }

    // find all indegrees
    vector<int> indegree(v) ;
    for (auto i : adj) {
        for (auto j : i.second) {
            indegree[j]++ ;
        }
    }

    // 0 indegree walon ko push kardo
    queue<int> q ;
    for (int i = 0 ; i < v ; i++) {
        if (indegree[i] == 0) {
            q.push(i) ;
        }
    }


    // do DFS
    vector<int> ans ;
    while (!q.empty()) {
        int front = q.front() ;
        q.pop() ;

        // ans store
        ans.push_back(front) ;

        // neighbour indegree update
        for (auto neighbour : adj[front]) {
            indegree[neighbour]-- ;
            if (indegree[neighbour] == 0) {
                q.push(neighbour) ;
            }
        }
    }


    return ans ;
}