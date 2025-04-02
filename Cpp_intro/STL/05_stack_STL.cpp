#include<iostream>
#include<stack>
using namespace std;

int main() {
    // initialising a stack
    stack <string> s ;

    // inserting elements into stack
    s.push("ananya") ;
    s.push("radhika") ;
    s.push("sara") ;

    stack<int> st ;
    // can also use emplace -> more faster than push operation
    st.emplace(2) ;
    st.push(4) ;
    st.push(6) ;
    st.push(8) ;

    // top element of stack
    cout << s.top() << endl ;

    // removing the top element of the stack
    s.pop() ;
    cout << "after removing the top element" << endl ;
    cout << s.top() ;

    // size of stack
    cout << "size of stack " << st.size() << endl ;

    // if stack is empty or not
    cout << "is empty ? " << st.empty() << endl ;

    // to empty the stack
    while (!st.empty()) {
        s.pop() ;
    }




    return 0 ;
}