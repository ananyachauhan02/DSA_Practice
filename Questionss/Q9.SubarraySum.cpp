// sum of all subarrays
// Q. Given an array a[] of size n. Output sum of each subarray of the given array.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int curr = 0;
    for(int i = 0;i<n;i++){
        curr = 0;
        for(int j = 1; j<n ; j++){
            curr += arr[j];
            cout << curr << endl;

        }
    }
    return 0;
}