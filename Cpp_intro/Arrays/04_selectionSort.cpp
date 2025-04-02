/* 

Sorting :
    it is the ordering of elements of an array in ascending order


selection sort : find the min element in ans unsorted array and 
                 swap it with the element at the beginning of the unsorted
                 array

    12 , 45 , 23 , 51 , 19 , 08 ---> original array
    08 , 45 , 23 , 51 , 19 , 12 ---> after 1st loop
    08 , 12 , 23 , 51 , 19 , 45 ---> after 2nd loop
    08 , 12 , 19 , 51 , 23 , 45 ---> after 3rd loop
    08 , 12 , 19 , 23 , 51 , 45 ---> after 4th loop
    08 , 12 , 19 , 23 , 45 , 51 ---> after 5th loop

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n-1;i++){
        for(int j = i+1; j<n;j++){
            if(arr[j]<arr[i]){
                // for swapping the elements
                swap(arr[i] , arr[j]) ;
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
