/*
Probelm :
    Isyana is given the number of visitors at her local park theme on N-consecutive days.
    The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies
    both of the following conditions:

    1)The number of visitors on the day is strictly larger than the number of visitors on
    each of the previous days.
    2)Either it is the last day, or the number of visitors on the day is strictly larger than
    the number of visitors on the following day.
    Note that the very first day could be a record breaking day!
    Please help Isyana find out the number of record breaking days.
*/

/*
INPUT:
    The first line of the input gives the number of test cases,T. T test cases follow. each test
    case begins with a line containing the integer N. The second line contains N integers. The i-th
    integer is Vi.

OUTPUT:
    For each test case, output one line containing Case #x:y, where x is the test case number
    (starting from 1) and y is the number of record breaking days.

CONSTRAINTS:
    Time limit : 20 seconds per test set.
    Memory limit : 1GB.
    1<=T<=100                                               for 1 sec = 10^8 operations (approx)
    0<=vi<=2*10^5                                               20 sec = 2*10^9 operations(approx)

    Test set 1
    1<=N<=2*10^5

    Test set 2
    1<=N<=2*10^5 for at most 10 test cases
    for the remaining cases, 1<=N<=1000.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int mx = -1;
    int ans = 0;
    int n;
    cin>>n;
    int a[n+1];
    a[n] = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if (n==1){
        cout<<"1"<<endl;
    }


    for(int i =0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
     mx = max(mx,a[i]);
    }
    cout<<ans<<endl;
    return 0;
}

