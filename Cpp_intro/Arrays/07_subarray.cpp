/*
SUBARRAY ---> continous part of the array

for example : 1 2 0 7 2 0 2
subarray : 2 0 7 2

number of subarrays of an array with n elements : nC2 + n = n*(n+1)/2

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>arr[i];}
    int sum = 0;
    for(int i=0;i<n;i++){
    sum = sum + arr[i];}
    cout<<sum;
    
return 0;
}