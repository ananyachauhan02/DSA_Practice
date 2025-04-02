#include<iostream>
using namespace std;

int partition(int &arr[], int s, int e){

    int pivot = arr[s];
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot)
        count++;
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhal lete hai
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        swap(arr[i++], arr[j--]);
    }

    return pivotIndex;

}

void QuickSort(int &arr[], int s, int e){

    // base case
    if(s>=e)
    return;

    // partitioning
    int p = partition(arr, s, e);

    // left sorting
    QuickSort(arr, s, p-1);

    // Right sorting
    QuickSort(arr, p+1, e);


}


int main(){

    int arr[6] = {21, 45, 11, 65, 32, 10};
    int n = 6;
    QuickSort(arr, 0, arr.length()-1);
    return





}