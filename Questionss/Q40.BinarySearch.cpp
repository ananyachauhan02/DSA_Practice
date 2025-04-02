#include<iostream>
using namespace std;

bool binarySearch(int arr[],int start, int end, int key ){

    // base case
    if(start > end){
        return false;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == key){
        return true
    }

    

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, end, key);
    }
    else{
        return binarySearch(arr, start, mid-1, key);
    }

}

int main(){

    int arr[5] = {2, 5, 6 ,1 ,8};
    int start = 0;
    int size = 5;
    int end = size-1;
    int key = 1;

    if(binarySearch){
        cout << "key found" << endl;
    }
    else{
        cout << "element not found" << endl;
    }

    return 0;
}