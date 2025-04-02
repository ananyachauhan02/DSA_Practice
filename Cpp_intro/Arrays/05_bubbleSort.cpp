/*
BUBBLE SORT :
repeatedly swap two adjacent elements if they are in wrong order

    12 , 45 , 23 , 51 , 19 , 8
    12 , 23 , 45 , 51 , 19 , 8
    12 , 23 , 45 , 51 , 19 , 8
    12 , 23 , 45 , 19 , 51 , 8
    12 , 23 , 45 , 19 , 8  , 51

    this will keep on going util we find
    the sorted array

    if we have an array of n elements then we need to do n-1 
    iterations to get a sorted array.

    for first iteration we go till n-1
    for second iteration we go till n-2
    and so on...  

    ith iteration ---> n-i
*/ 
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    int arr[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n - i - 1 ; j++) {
            if (arr[j] > arr[j + 1]) {
                swap (arr[j] , arr[j+1]) ;
            }
        }
    }


    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl ;
    return 0 ;
}