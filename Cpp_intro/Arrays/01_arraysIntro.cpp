#include<iostream>
using namespace std;

int main(){

// MAKING AN ARRAY

    int marks[4] = {15,30,42,34};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

// address operator

    cout << "base address of marks array is " << &marks << endl ;
    cout << "base address of marks array is " << marks << endl ;
 
// chnaging the value of an array
    marks[2] = 20;
    cout<<marks[2]<<endl;

// printing an array using loop
    
    for(int i = 0; i<4; i++)
    cout<<marks[i]<<endl;

// taking array as input
    int arr[3];
    for(int j = 0; j<3;j++){
        cin>>arr[j];
    }


// 2d array

    // initialise
    int arr[2][3] = {
        {1 , 2, 3} ,
        {4 , 5 , 6}
    }

    // row wise printing
    int row = 4 ;
    int col = 3 ;
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; i < col ; j++) {
            cout << arr[i][j] ;
        }
    }

    // col wise printing
    for(int i = 0 ; i < col ; i++) {
        for(int j = 0 ; i < row ; j++) {
            cout << arr[i][j] ;
        }
    }

    // taking input 
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; i < col ; j++) {
            cout << "row is " << row << "   " << "col is " << col << endl ;
            cin >> arr[i][j] ;
        }
    }

    

// POINTERS AND ARRAYS
    int* p = marks;
    cout<<"the value of *p is "<<*p<<endl; // giving the value
    cout<<"the value of *((p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"the address of marks[0] is "<<&p<<endl; // giving the address
    cout<<"the address of marks[1] is "<<(p+1)<<endl;
    cout<<"the address of marks[2] is "<<(p+2)<<endl;
    cout<<"the address of marks[3] is "<<(p+3)<<endl;

   

    return 0;
}
