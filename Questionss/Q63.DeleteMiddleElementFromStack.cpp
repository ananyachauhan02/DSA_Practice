// delete middle element from stack - codestudio

#include<iostream>
#include<stack>
using namespace std ;

void solve(stack<int>inputStack , int count , int size) {

    // base case
    if (count == size) {
        inputStack.pop() ;
        return ;
    }
    int num = inputStack.top() ;
    inputStack.pop() ;

    // recursive call
    solve(inputStack , count++ , size) ;

    inputStack.push(num) ;
    


}

void delete(stack<int>inputStack , int N) {
    int count = 0 ;
    solve(inputStack , count , N) ;
}