#include<iostream>
using namespace std;

void sortArray(int arr[], int n){

    // base case
    if(n == 0 || n == 1)
    return;

    // first case solved
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1])
        swap(arr[i], arr[i+1]);
    }

    // recursive call
    sortArray(arr, n-1);

}

int main()
{
    int arr[5] = {12, 4, 56, 11, 30};
    int n = 5;

    sortArray(arr , n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}