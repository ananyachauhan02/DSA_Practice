#include<iostream>
#include<map>
#include<unordered_map>
using namespace std ;


int main() {

    // creation
    unordered_map<string , int> mp ;

    // insertion
    // 1
    pair<string , int> p1 = make_pair("babbar" , 3) ;
    mp.insert(p1) ;

    // 2
    pair<string , int> p2("love" , 2) ;
    mp.insert(p2) ;

    // 3
    mp["mera"] = 1 ;

    // will update the value from 1 to 2
    mp["mera"] = 2 ;
    
    // search
    cout << mp["mera"] << endl ;
    cout << mp.at("babbar") << endl ;
    // created new entry for new element and return ans 0
    cout << mp["unknown"] << endl ;

    // size
    cout << mp.size() << endl ;

    // to check presence
    cout << mp.count("bro") << endl ; // -> return boolena value

    // erase function
    mp.erase("love") ;
    cout << mp.size() << endl ;

    // traversing 
    for (auto i : mp)
    {
        cout << i.first << " " << i.second ;
    }


    // find fuction
    if (mp.find("babbar") != mp.end()) {
        cout << "found" << endl ;
    }
    else {
        cout << "not found" << endl ;
    }

    // iterator
    unordered_map<string , int> :: iterator it = mp.begin() ;

    while (it != mp.end()) {
        cout << it -> first << " " << it -> second << endl ;
        it++ ;
    }

    // a small question - to print frequency of all the characters in the given string
    string str = "love babbar" ;
    unordered_map<char, int> mp ;
    for(int i = 0  ; i < str.length() ; i++) {
        char ch = str[i] ;
        mp[ch]++ ;
    }

    for (auto i : mp) {
        cout << i.first << " " << i.second << endl ;
    }


}