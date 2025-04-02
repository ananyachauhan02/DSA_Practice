#include<iostream>
#include<cmath> // this header file is used so that we can use function sqrt(squareroot)
using namespace std;

int main(){

    // tO CHECK IF A NUMBER IS PRIME OR NOT

    int n;
    cin>>n;

    bool flag = 0;
    for(int i = 2 ; i<sqrt(n) ; i++){
        if(n%i==0){
            cout<<"non prime number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime"<<endl;
    }
    return 0;
}