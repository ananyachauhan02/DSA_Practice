// set stores only unique values
// element modification is not possible
// implementation is done using bst
// elements will be returned in sorted order

#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

// complexity of insert find erase and count is O(logn)
//// complexity of size begin end empty is O(1)
int main() {
    // initialising a set
    set<int> s ; 

    // inserting values in set
    
    s.insert(5) ;
    s.insert(1) ;
    s.insert(6) ;
    s.insert(0) ;
    s.insert(5) ; // will not store duplicates

    // printing all the elements of set
    cout << "printing all elements of set " << endl ;
    for(auto i:s){
        cout << i << " " ; 
    }
    cout << endl;

    //  erasing first element of the set
    s.erase(s.begin()) ;
    for (auto i : s) {
        cout << i << " " ;
    }
    cout << endl ;

    // erase more than one element
    // s.erase(s.begin() , s.begin() + 1) ;

    // erasing  second element of the set
    set <int> :: iterator it = s.begin() ;
    it++ ;
    s.erase(it) ;
    for (auto i : s){
        cout << i << " ";
    } cout << endl ;


    // erasing element by value
    s.erase(5) ;

    for (auto i : s){
        cout << i << " ";
    } cout << endl ;

    // to check whether a particular element is present in the set or not
    cout<<"is 5 present in the set "<<s.count(5)<<endl;

    // to find iterator of particular element
    set<int> st = {1 , 5 , 7 , 8} ;
    auto i = st.find(5) ;
    set<int>::iterator itr = s.find(5) ;
    for (auto it = itr ; it != s.end() ; it++) {
        cout << *it << " " ;
    } cout << endl ;




    // UNORDERED SET
    // -> only has distinct elements
    // -> unsorted order
    // -> same operations as set
    // unordered_set<int> s1 ;
    // s1.insert(1) ;
    // s1.insert(2) ;
    // s1.insert(3) ;

    //     // average TC - O(1)
    //     // if tle comes - switch to set
    //     // worst case is liner - O(n)



    // // MULTISET 
    // // -> stores duplicates also
    // // -> sorted manner
    // // -> same operations as set
    // multiset<int> ms ;
    // ms.insert(1) ;
    // ms.insert(2) ; // -> {1,1,2}
    // ms.insert(1) ;

    // ms.find(1) ; // -> will give iterator pointing to first element with value 1
    // ms.erase(1) ; // -> will erase all instances of 1
    



    return 0;
}