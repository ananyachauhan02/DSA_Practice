// half pyramid with 180 degree rotataion

#include<iostream>
using namespace std;

int main(){
    for (int i =1;i<=5;i++){
        for(int j =1; j<=5 ;j++){
          if(j<=5-i){
              cout<<" ";
          }
          else{
              cout<<"*"; // adding extraspace with a star will give a full pyramid
          }
        }
        cout<<endl;
    }
    return 0;
}