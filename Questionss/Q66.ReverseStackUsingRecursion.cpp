// Reverse stack using recursion

void insert(stack<int>&s , int x) {

    // base case
    if (s.empty()) {
        s.push(x) ;
        return ;
    }

    int top = s.top ();
    s.pop() ;

    // recursive call
    insert(s , x) ;
    s.push(top) ;
    


}

Stack<int>reverse(stack<int>&s) {

    // base case
    if (s.empty()) {
        return ;
    }

    int num = s.top() ;
    s.pop() ;

    // recursive call
    reverse(s) ;
    insert(s , num) ;

}