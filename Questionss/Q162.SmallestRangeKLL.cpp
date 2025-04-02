// smallest range from k sorted LL - codestudio

class node {
    int data ;
    int row ;
    int col ;

    node(int d , int r , int c) {
        this -> data = d ;
        this -> row = r ;
        this -> col = c ;
    }
};

class compare {

    bool operator()(node* a , node* b) {
        return a -> data > b -> data ;
    }
};

int kSortedLL(vector<vector<int>> &a , int k , int n) {

    priority_queue<node* , vector<node*> , compare> minHeap ;
    int maxi = INT_MIN ;
    int mini = INT_MAX ;

    for (int i = 0 ; i < k ; i++) {
        node* temp = new node (a[i][0] , i , 0) ;
        minHeap.push(temp) ;
        maxi = max(maxi , a[i][0]) ;
        mini = min(mini , a[i][0]) ;
    }

    // assign start and end index 
    int start = mini ;
    int end = maxi ;

    // process ranges
    while (! minHeap.empty()) {

        node* temp = minHeap.top() ;
        minHeap.pop() ;
        int ele = temp -> data ;
        int row = temp -> row ;
        int col = temp -> col ;
        mini = ele ;

        // range or ans updation
        int tempAns = maxi - mini ;
        if (tempAns < (end - start)){
            start = mini;
            end = maxi;
        }

        // next element exists
        if (col + 1 < a[row][col+1]) {
            maxi = max(maxi , a[row][col+1]) ;
            node* temp2 = new node(a[row][col+1] , row , col+1) ;
            minHeap.push(temp2) ;

        }

        // next element does not exist
        else break ;
    }

    return (end - start + 1) ;
}