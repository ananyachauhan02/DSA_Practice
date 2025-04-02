#include<bits/stdc++.h>
using namespace std;

int main(){
    // in 1D array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int MinNo = INT_MIN;
    int MaxNo = INT_MAX;
    for(int i = 0;i<n;i++){
        MaxNo = max(MaxNo,arr[i]);
        MinNo = min(MinNo,arr[i]);
    }
    cout<<MaxNo<<endl<<MinNo;


    // in 2d Array
    for (int i = 0 ; i < row ; i++){
        for(int j= 0 ; j < col ; j++) {
            if(arr[i][j] > MaxNo) {
                MaxNo = arr[i][j] ;
            }
        }
    }

    return 0;

}
