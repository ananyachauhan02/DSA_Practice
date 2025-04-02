#include<iostream>
// library used for using STL vector
#include<vector>

using namespace std;
int main() {

    // creating a new vector
    vector <int> v ;

    // capacity tells how many elements can be inserted 
    // size tells how many elements are present
    // capacity of new vector is always zero

    cout << "capacity: " << v.capacity() << endl ;
    // to insert element in vector
    v.push_back(1) ;
    cout << "Capacity: " << v.capacity() << endl ;

    v.push_back(2) ;
    cout << "Capacity: " << v.capacity() << endl ;

    v.push_back(3) ;
    cout << "Capacity: " << v.capacity() << endl ;
    cout << "Size: " << v.size() << endl ;

    // to access a specific element of the vector
    cout << "element at second place: " << v.at(2) << endl ;

    // to get first element of the vector
    cout << "first element of the vector: " << v.front() << endl ;

    // to get the last element of the vector
    cout << "last element of the vector: " << v.back() << endl ;

    // to print a vector
    cout << "before pop: " ;

    for (int i:v) {
        cout << i << " " ;
    } cout << endl ;

    // to remove the lastest element inserted in the vector
    v.pop_back() ;

    cout << "after pop: " ;
    for (int i:v) {
        cout << i << " " ;
    } cout << endl ;


    // to clear a vector
    cout << "before clear: " << v.size() << endl ;
    v.clear() ;
    cout << "after clear: " << v.size() << endl ;

    vector<int> vec1(4, 10) ;

    // copying vector into new vector
    vector<int> vec2(vec1) ;

    vector<int> vec4 ;
    vec4.emplace_back(10) ; // similar to push_back but takes less time to complile





    // 2D vector
    cout << endl << endl << "2D vectors" << endl ; 

    vector<vector<int>> Vec ; // --> initialising 2d vector

    vector<int> v1 ;
    v1.push_back(1) ;
    v1.push_back(2) ;

    vector<int> v2 ;
    v2.push_back(10) ;
    v2.push_back(20) ;

    vector<int> v3 ;
    v3.push_back(100) ;
    v3.push_back(200) ;
    v3.push_back(300) ;

    Vec.push_back(v1) ; // --> adding values in vector
    Vec.push_back(v2) ;
    Vec.push_back(v3) ;

    // printing 2D vector
    for (auto i : Vec) {
        for (auto j : i) {
            cout << j << " " ;
        } cout << endl ;
    }
    cout << "second way of printing 2D vector" << endl ;

    for (int i = 0 ; i < Vec.size() ; i++) {
        for (int j = 0 ; j < Vec[i].size() ; j++) {
            cout << Vec[i][j] << " " ;
        } cout << endl ;
    }


    // define 10 X 20 vector
    vector<vector<int>>Vec(10 , vector<int>(20,0)) ;





}



