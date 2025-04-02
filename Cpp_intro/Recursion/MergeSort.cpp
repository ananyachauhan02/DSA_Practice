#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){

    int mid = (s+e)/2;

    // length of both the new arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating two new arrays
    int *first =  new int [len1];
    int *second = new int [len2];

    // copying values of first array
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    // copying values of second array
    k = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = s;
    
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[k++] = first[index1++];
    }

    while(index2 < len2){
        arr[k++] = second[index2++];
    }


}

void mergeSort(int *arr, int s, int e){

    // base case
    if(s >= e)
    return;

    int mid = (s + e)/2;

    // sorting left part
    mergeSort(arr, s, mid);

    // sorting right part
    mergeSort(arr, mid + 1, e);

    // merge both arrays
    merge(arr, s, e);
}


int main(){

    int arr[6] = {2,3,8,4,0,1};
    int n = 6;

    mergeSort(arr, 0, n-1);


    return 0;
}