// Bellman Ford - codestudio

vector<int> bellmanFord(int n , int m , int src , vector<vector<int>> &edges) {
    vector<int> distance(n+1 , 1e8) ;
    distance[src] = 0 ;

    for (int i = 1 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            int u = edges[j][0] ;
            int v = edges[j][1] ;
            int w = edges[j][2] ;

            if ((distance[u] + w) < distance[v]) {
                distance[v] = distance[u] + w ;
            }
        }
    }

    // check if negative cycle
    bool flag = 0 ;
    for (int j = 0 ; j < n ; j++) {
        int u = edges[i][0] ;
        int v = edges[i][1] ;
        int w = edges[i][2] ;

        if ((distance[u]+w) < distance[v]) {
            distance[v] = distance[u] + w ;
        }
    }

    if (flag == 1) {
        return {-1} ;
    }

    return distance ;
}