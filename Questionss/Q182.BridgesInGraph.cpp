// Bridges in a graph - codestudio

#include<bits/stdc++.h>

void dfs(int node , int parent , int &timer , vector<int> &disc , vector<int> &low , vector<vector<int>> & res , unordered_map<int , list<int>> &adj , unordered_map<int , bool> &vis) {

    vis[node] = true ;
    disc[node] = low[node] = timer++ ;

    for (auto nbr : adj[node]) {
        if (nbr == parent) {
            continue ; 
        }
        if (! vis[nbr]) {
            dfs(nbr , node , timer , disc , low , res , adj , vis) ;
            low[node] = min(low[node] , low[nbr]) ;
            // check edge is bridge or not
            if (low[nbr] > disc[node]) {
                vector<int> ans ;
                ans.push_back(node) ;
                ans.push_back(nbr) ;
                res.push_back(ans) ;
            }
        }
        else {
            // node is already visited but not parent
            // back edge
            low[node] = min(low[node] , disc[nbr]) ;
        }
    }

}



vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    // adj list
    unordered_map<int , list<int>> adj ;

    for (int i = 0 ; i < edges.size() ; i++) {
        int u = edges[i][0] ;
        int v = edges[i][1] ;

        adj[u].push_back(v) ;
        adj[v].push_back(u) ;
    }

    int timer = 0 ;
    vector<int> disc(v) ;
    vector<int> low(v) ;
    int parent = -1 ;

    unordered_map<int , bool> vis ;

    for (int i = 0 ; i < v ; i++) {
        disc[i] = -1 ;
        low[i] = -1 ;
    }


    vector<vector<int>> res ;
    // dfs
    for (int i = 0 ; i < v ; i++) {
        if (! vis[i]) {
            dfs(i , parent , timer , disc , low , res , adj , vis) ;
        }
    }

    return res ;

}