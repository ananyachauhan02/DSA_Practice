// priority queue has the first element as the greatest element of the queue
// keeps elements in descending order

#include<iostream>
#include<queue>
using namespace std;

int main() {

    // initialisation
    priority_queue<int> pq ;

    // inserting elements --> {6 , 5 , 2 , 1}
    pq.push(6) ;
    pq.emplace(1) ;
    pq.emplace(5) ;
    pq.emplace(2) ;

    // top element
    cout << pq.top() << endl ; // -> 6

    // remove element
    cout << pq.pop() << endl ;
    cout << pq.top() << endl ; // -> 5

    // priority queue in pairs  --> {{2, 1} , {1, 3} , {1 , 2} , {1 , 1}}
    priority_queue<pair <int , int>> p ;
    p.push(1,2) ;
    p.push(2,1) ;
    p.push(1,3) ;
    p.push(1,1) ;


    //initialising queue for : MAX heap (normal priority queue in descending order)
    priority_queue<int> maxi ;
    // inserting data in maxi
    maxi.push(1) ;
    maxi.push(3) ;
    maxi.push(2) ;
    maxi.push(0) ;

     // size of maxi
    cout << "size of maxi " << maxi.size() << endl ;

    // printing elements of maxi
    int n = maxi.size() ;
    for (int i = 0 ; i < n ; i++) {
        cout << maxi.top() << " " ;
        maxi.pop() ;
    } cout << endl ;


    // initialsing queue for : MIN heap (priority queue in ascending order)
    priority_queue<int, vector<int> , greater<int>> mini ;

    // inserting data in mini
    mini.push(5) ;
    mini.push(1) ;
    mini.push(0) ;
    mini.push(4) ;
    mini.push(3) ;

    // size of mini
    cout << "size of mini " << mini.size() << endl ;

    //printing elements of mini
    int m = mini.size() ;
    for (int i = 0 ; i < m ; i++) {
        cout << mini.top() << " " ;
        mini.pop() ;
    } cout << endl ;


    return 0 ;
}