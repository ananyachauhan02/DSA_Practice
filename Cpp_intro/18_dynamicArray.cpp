#include<iostream>
using namespace std;

// creating a sum
int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    char ch = 'q';
    cout<<sizeof(ch)<<endl;

    char *c = &ch;
    cout<<sizeof(c)<<endl;

    // initating variable 
    int n;
    cin>>n;

    // creating variable size array;
    int* arr = new int[n];

    // taking input of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = getSum(arr,n);
    cout<<"answer is : "<<ans<<endl;

    return 0;
}