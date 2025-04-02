// Minimum spanning trees - codestudio

#include<bits/stdc++.h>
bool cmp(vector<int>&a, vector<int>&b) {
   return a[2]<b[2];   
}

 
void makeSet(vector<int>&parent,vector<int>&rank,int n) {

    for(int i=0;i<n;i++) {

        parent[i]=i;
        rank[i]=0;

    }
}

 

int FindParent(vector<int>&parent , int node) {

    if(parent[node]==node) {

        return node;
    } 

    return parent[node]=FindParent(parent, parent[node]) ;

}

void unionSet(int u,int v, vector<int>&parent,vector<int>&rank) {

    u=FindParent(parent, u);
    v=FindParent(parent, v);

    if(rank[u]<rank[v]) {

        parent[u]=v;
        // rank[u]++;

    }

    else if(rank[u]>rank[v]) {

        parent[v]=u;
        // rank[v]++;

    }

    else {

        parent[v]=u;
        rank[u]++;

    }

}

 

int minimumSpanningTree(vector<vector<int>>& edges , int n) {

    sort(edges.begin(),edges.end(),cmp);

    vector<int>parent(n);

    vector<int>rank(n);

    makeSet(parent,rank,n);

    int miniWt=0;

    for(int i=0;i<edges.size();i++) {

        int v=FindParent(parent, edges[i][0]);
        int u=FindParent(parent, edges[i][1]);
        int w=edges[i][2];

        if(v!=u) {

            miniWt+=w;
            unionSet(u, v, parent, rank);

        }
    }

    return miniWt;

}

