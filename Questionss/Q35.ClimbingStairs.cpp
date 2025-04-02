#include<iostream>
using namespace std;

int count(long long nStairs){

    // base case
    if(nStairs<0)
    return 0;

    if(nStairs==0)
    return 1;

    // Recursive Relation
    int ans = count(nStairs-2) + count(nStairs-1);

    return ans;
}