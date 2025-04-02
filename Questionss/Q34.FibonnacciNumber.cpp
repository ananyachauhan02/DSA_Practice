#include<iostream>
using namespace std;

int fibonnacci(int n){

    // base case
    if(n==0)
    return 0;

    if (n==1)
    return 1;

    // recursive relation
    int ans = fibonnacci(n-2) + fibonnacci(n-1);

    return ans;

}