// Sort a Stack - codestudio

void insertedSort(stack<int>&s , int x) {

    // base case
    if (s.empty() || (!s.empty() && s.top() < x)) {
        s.push(x) ;
        return ;
    }

    int top = s.top() ;
    s.pop() ;

    // recursive call
    insertedSort(s , x) ;
    s.push(x) ;

}

void sortStack (stack<int>&s) {

    // base case
    if (s.empty()) {
        return ;
    }

    int num = s.top() ;
    s.pop() ;

    // recursive call
    sortStack(s) ;
    insertedSort(s , num) ;

}