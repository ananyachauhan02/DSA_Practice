#include<iostream>
using namespace std;

void print(*p){
    cout<<*p<<endl;
}

void update(int *p){

    *p = *p+1;
    cout<<"inside "<<p<<endl;
}

int getSum(int arr, int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];

    }
    return sum;
}

int main(){

    int value = 5;
    int *p = &value;

    //print(p);

    cout<<"before p "<< endl;
    update (p);
    cout<<"after p "<< endl;

    int arr[5] = {1,2,3,4,5};
    cout<<"sum is "<<getSum(arr,5)<<endl;

    return 0;
}