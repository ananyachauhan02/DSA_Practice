#include<iostream>
using namespace std;

void sum(int arr[], int size){

    // base case
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    // recursive relation
    int remaining sum = sum(arr + 1 , size - 1);
    int ans = arr[0] + sum;

    return ans;

}

int main(){

    int arr[5] = {2, 4, 5, 3, 1};
    int size = 5;

    int ans = sum(arr,size);

    cout<<"the sum is : "<<ans<<endl;

    return 0;

}