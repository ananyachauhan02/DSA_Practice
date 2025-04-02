// Detect cycle in a directed graph - codestudio


// using dfs
#include<unordered_map>
#include<list>

// function to check cycle detection in graph
bool isCycle(int node, unordered_map<int, bool> &visited,unordered_map<int, bool> &dfsvisited,unordered_map<int, list<int> > &adj)
{
    visited[node]=true;
    dfsvisited[node]=true;
    
    for(auto neighbour:adj[node])
    {
        if(!visited[neighbour])
        {
            bool  cycleDetected = isCycle(neighbour,visited,dfsvisited,adj);
            if(cycleDetected)
                return true;
        }
        else if(dfsvisited[neighbour])
            return true;
    }
    dfsvisited[node] = false;
    return false;
}



int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  

    // initially creation of adjacency list
    unordered_map<int, list<int> > adj;
    for(int i=0;i<edges.size();i++)
    {

      int u = edges[i].first;
      int v = edges[i].second;

      adj[u].push_back(v);
    }


    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;
    // call dfs for all components
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bool cycleFound  = isCycle(i,visited,dfsvisited,adj);
            if(cycleFound)
                return true;   
        }
    }
    return false;
  
}


// using bfs

#include<bits/stdc++.h>

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    // create adj list
    unordered_map<int , list<int> > adj ;
    for (int i = 0 ; i < edges.size() ; i++) {
        int u = edges[i].first - 1 ;
        int v = edges[i].second - 1 ;

        adj[u].push_back(v) ;
    }

    // find all indegrees
    vector<int> indegree(n) ;
    for (auto i : adj) {
        for (auto j : i.second) {
            indegree[j]++ ;
        }
    }

    // 0 indegree walon ko push kardo
    queue<int> q ;
    for (int i = 0 ; i < n ; i++) {
        if (indegree[i] == 0) {
            q.push(i) ;
        }
    }

    // do DFS
    int cnt = 0 ;
    while (!q.empty()) {
        int front = q.front() ;
        q.pop() ;

        // increase count
        cnt++ ;

        // neighbour indegree update
        for (auto neighbour : adj[front]) {
            indegree[neighbour]-- ;
            if (indegree[neighbour] == 0) {
                q.push(neighbour) ;
            }
        }
    }

    if (cnt == n) {
        return false ;
    }
    else {
        return true ;
    }
}