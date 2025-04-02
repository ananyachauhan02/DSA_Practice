/*

Q. An arithmetic array is an array that contains atleast two integers and the differences
between consecutive integers are equal.For example, [9,10], [3,3,3], and [9,7,5,3]are
arithmetic arrays, while [1,3,3,7] , [2,1,2] and [1,2,4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers.The i-th non negative integer of an array
is Ai. She wants to choose a contagious arithmetic subarray from her array that has the 
maximum length. Please help her to determine the length of the longest contigious arithmetic
subarray.

INPUT :
The first line of input contains number of test cases ,T.T test cases follow. Each testcase begin
with a line containing the integer N. The second line contains N integers. The i-th integer is Ai.

OUTPUT :
For each test case, output one line containing Case #x:y, where x is the test case number (starting 
from 1 ) and y is the length of the longest contiguous arithmetic subarray.

*/

/*
  Problem 
    An arithmetic array is an array that contains at least two integers and the differences
    between consecutive integers are equal.
    Sarasvati has an array of N non negative integers. The ith integer of the array is Ai.
    She wants to choose a contiguous arithmetic subarray from her array that has the max length.
    PLease help her to determine the length of longest contagiousrithmetic subarray.

    Input:
    The first line of the input gives the number of test cases, T.T test cases follow. Each test 
    case begins with a line containing the integer N. The second line contains N integers. The ith 
    integer is Ai.

    Output: 
    For each test case, output one line Containing case #x:y where x is the test case number and y is 
    the length of longest contiguous arithmetic subarray.

    Constraints :
    time limit : 20 sec per test set
    memory limit : 1GB
    1<=T<=1000
    0<=Ai<=10^9
     

    Test set 1:
    2<=N<=2000

    Test set 2:
    2<=N<=2X10^5 for atmost 10 cases

    Sample test case:
    array :                                 10  7   4   6   8   10  11
    difference betweeen the numbers     :     3   3   2   2   2   1

    length of longest contiguous arithmetic subarray :  4  6  8  10
    
    output(number of elements in the above array) : 4




*/



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<=n;i++){
        cin>>arr[i];
    }

    int ans = 2;
    int pd = arr[1]-arr[0];
    int j=2;
    int curr = 2;

    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd == arr[j]-arr[j-1];
            curr = 2;
        }

        ans = max(ans,curr);

        j++;
    }
    cout<<ans<<endl;

    return 0;

} 