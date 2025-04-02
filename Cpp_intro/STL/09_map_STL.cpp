#include<iostream>
#include<map>
using namespace std;

int main() {
    // initialising a map
    map <int,string> m ;

    // inserting values
    m[1] = "ananya" ;
    m[2] = "singh" ;
    m[13] = "chauhan" ;

    m.insert({5,"hello"});

    // printing elements
    for(auto i:m){
        cout << i.first << " " << i.second << endl ;
    }

    // to access any elemenet
    for (auto i : m.begin() ; i != m.end() ; i++) {
        cout << i -> first << i -> second << endl ;
    }

    // is map empty
    if (m.empty()) {
        cout << "empty map" << endl ;
    } 

    // finding element 
    cout << m.find() << endl ;
    cout << "is 13 present " << m.count(13) << endl ;

   
    // erasing element

    cout << "before erase " << endl;
    for (auto i : m) {
        cout << i.second << endl ;
    }

    m.erase(13) ;

    cout << "after erase" << endl ;
    for (auto i : m) {
        cout << i.second << endl ;
    }

    
    // find function
    auto it = m.find(5);
    for (auto i = it ; i != m.end() ; i++) {
        cout << (*i).first << endl ;
    }




    map <string , int> mp ;
    mp["raj"] = 10 ;
    mp["akki"] = 20 ;
    mp["hima"] = 30 ;
    mp["suman"] = 40 ;
    mp["raj"] = 50 ; // -> overwrites the previous value of raj 
                     // -> map only stores unique keys
                     // -> O(n) in all cases
                     // -> can have pair possible
    
    mp.emplace("raj" , 45) ; // -> same as insert but faster
    mp.erase("raj") ; 

    // to find element
    auto i = mp.find("raj") ;

    // to erase first elemenet
    mp.erase(mp.begin()) ;

    // to erase elements in a given range
    mp.erase(mp.begin() , mp.begin() + 2) ;

    // clear whole map
    mp.clear() ;


    // UNORDERED MAP

        // does not store in ordered format
        // O(1) -> in almost all cases
        // O(n) -> in worst case (n -> size of container)
        // same operations as map
        // pairs not possible in unordered map

        unordered_map<int , int> mpp ;

    
    // MULTIMAP

        // stores key values in ordered format
        // unique values is not necessary
        // same operations as map

        multimap<string , int> mmpp ;

   

    return 0;
}