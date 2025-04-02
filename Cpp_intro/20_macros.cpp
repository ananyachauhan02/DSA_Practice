#include<iostream>
using namespace std;

#define PI 3.14  // ---> using macro

int main(){

    int r = 5;

    // double pi = 3.14 --> will not be using this because it uses space

    double Area = PI * r * r;

    cout<<"area is : "<<Area<<endl;


    return 0;
}