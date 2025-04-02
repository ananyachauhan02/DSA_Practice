#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    // base case
    if(size == 0){
        return false;
    }
    // recursive relation
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1, size-1);
        return remainingPart;
    }

}

int main(){

    int arr[5] = {2, 5, 7, 1, 3}
    int size = 5;
    int key = 1;

    int ans = linearSearch(arr, size, key);

    if(ans){
        cout << "key found!!!" << endl;
    }
    else{
        cout << "key not found!!!" << endl;
    }

    return 0;

}