// Two stack - codestudio

#include<iostream>
using namespace std ;

class TwoStack {

    int *arr ;
    int top1 ;
    int top2 ;
    int size ;

    TwoStack(int s) {
        this -> size = s ;
        top1 = -1 ;
        top2 = s ;
        arr = new arr[s] ;

    void Push1(int num) {
        if (top2 - top1 > 1) {
            top1 ++ ;
            arr[top1] = num ;
        }
    }

    void Push2(int num) {
        if (top2 - top1 > 1) {
            top2-- ;
            arr[top2] = num ;
        }
    }

    void pop1() {
        if (top1 >=0) {
            int ans = arr[top1] ;
            top1-- ;
            return ans ;
        }
        else {
            return -1 ;
        }
    }

    void pop2() {
        if (top2 < size) {
            int ans = arr[top2] ;
            top2++ ;
            return ans ;

        }
        else {
            return -1 ;
        }
    }

    }


};