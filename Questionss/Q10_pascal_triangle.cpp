/* Pascal triangle ---> triangle formed by binomial coefficients

1          -----> 0C0
1 1        -----> 1C0 1C1
1 2 1      -----> 2C0 2C1 2C2
1 3 3 1    -----> 3C0 3C1 3C2 3C3
1 4 6 4 1  -----> 4C0 4C1 4C2 4C3 4C4

*/

#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = 1;i<=n;i++){
        factorial = factorial*i;
        
            }
    return factorial;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;

    }
    return 0;
}
