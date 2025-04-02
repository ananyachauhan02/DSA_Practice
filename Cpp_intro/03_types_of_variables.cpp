#include<iostream>
using namespace std;
// This is an instance variable
int sum = 6;
// void reslut is a function
void result(){
    int a;
    cout<< sum;
}
int main(){

// This is a local variable
// precendence of local variable is more than instance variable
    int sum = 9;
    sum = 11;
    cout<<sum;
    result();

    return 0;

}
