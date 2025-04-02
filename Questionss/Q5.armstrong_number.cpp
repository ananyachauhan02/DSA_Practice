// armstrong number
//   1 5 3 = 1^3 + 3^3 + 5^3

#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int sum = 0;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + pow(lastdigit,3);
        n = n/10;

    }
    if(sum==originaln){
        cout<<"Armstrong number"<<endl;

    }
    else{
        cout<<"not an armstrong number"<<endl;
    }
}