// Merge K sorted Arrays - codestudio 

class Node {
    public :
    int data ;
    int row ;
    int col ;

    Node(int a , int row , int col) {
        this -> data = a ;
        this -> row = row ;
        this -> col = col ;
    }
};

class compare {
    public :
    bool operator()(Node* a , Node* b) {
        return a -> data > b -> data ;
    }
};

vector<int> mergeKsortedArrays(vector<vector<int>> &arr , int k) {

    priority_queue<Node* , vector<Node*> , compare > mini ;

    vector<int> ans ;

    for (int i = 0 ; i < k ; i++) {
        Node* temp = new Node(arr[i][0] , i , 0) ;
        mini.push(temp) ;
    }

    while (mini.size() > 0) {
        Node* temp = mini.top() ;
        ans.push_back(temp -> data) ;
        mini.pop() ;

        int row = temp -> row ;
        int col = temp -> col ;

        if (col+1 < arr[row].size()) {
            Node* next = new Node(arr[row][col+1] , row , col+1) ;
            mini.push(next) ;
        }
    } 
    return ans ;
}

