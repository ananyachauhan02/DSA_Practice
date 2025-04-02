// Design a stack that supports get Min() in O(1)time & O(1) extra space - CODESTUDIO
// TC - O() , SC = O() 

#include<stack>
#include<bits/stdc++.h>
class SpecialStack {
    //Define the data members
    stack<int> s;
    int mini = INT_MAX ;

    public:
        
    int push(int data) {
        // Implement the push() function.
        // for first element
        if (s.empty()) {
            s.push(data) ;
            mini = data ;
        }
        else {
            if (data < mini) {
                s.push(2 * data - mini) ;
                mini = data ;
            }
            else {
                s.push(data) ;
            }
        }
    }

    int pop() {
        // Implement the pop() function.
        if (s.empty()) {
            return -1 ;
        }

        int curr = s.top() ;
        s.pop() ;
        if (curr > mini) {
            return curr ;
        }

        else {
            int prev_mini = mini ;
            int val = 2 * mini - curr ;
            mini = val ;
            return prev_mini ;
        }
    }

    int top() {
        // Implement the top() function.

        if (s.empty()) 
            return -1 ;

            int curr = s.top() ;
            if (curr < mini) {
                return mini ;
            }
            else {
                return curr ;
            }
        
    }

    bool is_empty() {
        return s.empty() ;
    
    }

    int getMin() {
        // Implement the getMin() function.
        if (s.empty()) {
            return -1 ;

        }
        return mini ;
    }  
};