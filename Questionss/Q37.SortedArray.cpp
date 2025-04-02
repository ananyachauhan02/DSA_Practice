#include<iostream>
using namespace std;

bool isSorted(arr[], int size){

    // base condition
    if(size == 0 || size == 1){
        return true;
    }

    // recursive call 
    else{
        bool remainingPart = isSorted(arr + 1 , size - 1);
        return remainingPart;
    }

}

int main(){
     int arr[5] = {2,3,5,7,9};
     int size = 5;
     bool ans = isSorted(arr,size);


    if (ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array not sorted"<<endl;
    }

    return 0;
}