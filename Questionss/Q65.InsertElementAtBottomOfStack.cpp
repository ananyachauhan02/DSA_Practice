// Insert element at Bottom of stack - codestudio

#include<iostream>
#include<vector>
using namespace std ;

void solve (stack <int> s , int x) {

    // base case
    if (s.empty()) {
        s.push(x) ;
        return ;
    }

    int num = s.top() ;
    s.pop() ;
    // recursive call
    solve (s , x) ;
    s.push(num) ;


}

Stack <int> InsertAtBottom (stack<int>MyStack , int x) {

    solve (MyStack , x) ;
    return MyStack ;

}