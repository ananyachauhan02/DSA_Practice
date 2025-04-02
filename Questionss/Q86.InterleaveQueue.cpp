// Interleave first half of queue with second half using stack - GFG
// TC - o(n) , SC - O(n)

vector<int> rearrangeQueue(queue<int> &q) {

    stack<int> s ;
    int n = q.size() / 2 ;

    for (int i = 0 ; i < n ; i++) {
        int val = q.front() ;
        q.pop() ;
        s.push(val) ;
    } 

    while (! s.empty()) {
        int val = s.top() ;
        s.pop() ;
        q.push(val) ;
    }

    for (int i = 0 ; i < n ; i++) {
        int val = q.front() ;
        q.pop() ;
        q.push(val) ;
    }

    for (int i = 0 ; i < n ; i++) {
        int val = q.front() ;
        q.pop() ;
        s.push(val) ;
    }

    vector<int> ans ;
    while (! s.empty()) {
        int val = s.top() ;
        s.pop() ;
        ans.push_back(val) ;
        val = q.front() ;
        q.pop() ;
        ans.push_back(val) ;
    }

    return ans ;
}