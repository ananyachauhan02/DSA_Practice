#include<iostream>
using namespace std;

int i = 5;  //-->a global variable 

void a(int& i){
    cout<<i<<endl;
    b(i);  //--> sharing using refrence variable
}
void b(int& i){
    cout<<i<<endl;

}
int main(){

    int i =5;
    a(i);
    


    return 0;
}