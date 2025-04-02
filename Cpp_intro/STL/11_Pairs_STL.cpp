#include<bits/stdc++.h>
using namespace std;

int main() {

    pair<int , int> p  = {1 , 2} ;
    pair<pair<int , int> , int> pr = {{1 , 2} , 3} ;
    pair<pair<int , int> , pair <int , int> > prr = {{1 , 2} , {3 , 4}} ;

    cout << prr.first.first << endl ; // -> 1
    cout << prr.first.second << endl ; // -> 2
    cout << prr.second.first << endl ; // -> 3
    cout << prr.second.second << endl ; // -> 4
}