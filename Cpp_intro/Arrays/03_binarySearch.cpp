// BINARY SEARCH ---> takes less time to run


#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int n, int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

        mid = (s+e)/2 ; 
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;

/*
    TIME COMPLEXITY OF BINARY SEARCH

    After one iteration, length of array ---> n
    After second iteration, length of array---> n/2
    After third iteration, length of array ---> n/4
    After k iterations, length of array ---> n/2^k

    therefore time complexity of this algo will be ---> O(log n)
*/
    
    
    
    return 0;


}