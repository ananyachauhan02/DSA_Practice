// pythagorean triplet
// x,y,z ---> z>x,y & z^2 = x^2+y^2

#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x,max(y,z));
    int b,c;

    if(a==x){
        b=y;c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a == b*b + c*c){
    return true;}
    else{
    return false;}
    }

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    
    if(check(x,y,z)){
        cout<<"Pythagorean triplet";
    }
    else
    {
        cout<<"no";
    }
    return 0;

}