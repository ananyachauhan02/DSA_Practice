// Valid paranthesis - codestudio

#include<iostream>
#include<stack>

using namespace std ;

bool isValidParenthesis(string s) {

    stack<char> st ;

    for (int i = 0 ; i < st.size()  ; i++) {
        char ch = st[i] ;
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch) ;
        }
        else {
            if (! st.empty()) {
                char top = st.top ;
                
                if ( (ch == ')' && top == '(' ) ||
                     (ch == ']' && top == '[' ) ||
                     (ch == '}' && top == '{' ) ) {
                        st.pop() ;
                    }
                else {
                    return false ;
                }
            }
            else {
                return false ;
            }
        }
    }

    if (st.empty()) {
        return true ;
    }
    else {
        return false ;
    }



}