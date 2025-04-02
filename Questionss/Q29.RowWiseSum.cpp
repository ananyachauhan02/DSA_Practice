#include<bits/stdc++.h>
using namespace std;

void sum(int arr[][4],int row, int col){
    int arr[row][col];
    for(int i=0;i<row;i++){
        int sum =0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
            cout<<sum<<" ";
        }

    }
}

int main(){
    int row,col;
    cout<<"enter number of rows :"<<endl;
    cin>>row;
    cout<<"enter number of columns : "<<endl;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }

    }
    sum(arr,row,col);





    return 0;
}