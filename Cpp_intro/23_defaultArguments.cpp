#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0){
    // int start = 0 gives default value as 0
    for(int i = start; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    print (arr,size);
    print (arr, size, 2);

    return 0;
}