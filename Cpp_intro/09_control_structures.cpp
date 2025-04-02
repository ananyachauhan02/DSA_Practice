/* control structures : these are of three types

1. sequence structure 

    entry ---> action 1 ---> action 2 ---> exit

2. selection structure
    entry ---> condition check(if true)---> action 1 --> exit
                              (if false)--->action 2 --> exit

3. loop structure
    entry ---> loop ---> condition check(if true) ----> goes back to the loop again and again till it gets false
                                        (if false) ----> exit
*/

#include<iostream>
using namespace std;
int main(){

// TYPES OF SELECTION CONTROL STRUCTURE

// 1. IF ELSE LADDER 


    int age;
    cout<<"what is your age ?"<<endl;
    cin>>age;
    if ((age < 18)&& (age>0)){
        cout<<"you are not allowed to go to the party"<<endl;
    }
    else if(age==18){
        cout<<"can go"<<endl;
    }
    else{
        cout<<"you are allowed to go to the party"<<endl;
    }

// 2. SWITCH CASE STATEMENT

    int Age;
    cout<<"enter your age ";
    cin>>Age;
    switch (18)
    {cout<<"valid age";
        break;
    switch (10)
    cout<<"invalid age";
        break;
    switch (0)
    cout<<"not possible";
        break;
    
    default:
    cout<<"no more cases available";
        break;
    }
    return 0;

    }