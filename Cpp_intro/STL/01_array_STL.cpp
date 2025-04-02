#include <iostream>
#include<bits/stdc++.h>
// using array lib for implementing stl array
#include<array> 

using namespace std;
int main(){
    // forming our basic array
    int basic[6] = {1,5,3,9,7,2} ;

    // forming stl array
    array<int, 4> a = {1,9,3,4} ;

    // size of array
    int size = a.size() ;
    cout << size << endl ;

    // for printing array
    for(int i = 0 ; i < size ; i++){
        cout << a[i] << " " ;

    }
    cout << endl;
    
    // // sorting array
    // sort(basic.begin() , basic.rbegin()) ;
    // for(int i=0;i<size;i++){
    //     cout<<basic[i]<<" ";

    // }
    // cout << endl ;

    // to get access to a specific element on the basis of index
    cout << "element at second index " << a.at(2) << endl;

    // to check if array is empty: will return boolean value
    cout << "Empty or not " << a.empty() << endl;

    // to access first element of array
    cout << "first element " << a.front() << endl;

    // to access last element of array
    cout << "last element " << a.back() << endl;

    // to fill all the elements of array with single value 
    array <int, 5> arr ;
    arr.fill(10) ; // --> will fill all elements with value 10


    // iterators
    // begin() , end() , rbegin() , rend() ;

    // to print array in normal format
    cout << "printing new array " << endl ;
    for (auto i = arr.begin() ; i != arr.end() ; i++) {
        cout << *i << " " ;
    } cout << endl ;  // -> 1 3 4 5 6

    cout << "printing array in reverse" << endl ;
    for (auto i = arr.rbegin() ; i != arr.rend() ; i++) {
        cout << *i << " " ;
    } cout << endl ;  // -> 6 5 4 3 1



    

}