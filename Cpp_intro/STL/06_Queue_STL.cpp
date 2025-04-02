#include<iostream>
#include<queue>
using namespace std;



int main() {
    // QUEUE
        // -> based on first in first out (FIFO)
        // -> takes TC - O(1) for all operation 
        // -> taked TC - O(n) for deletion of queue (only case)


    // initialising a queue
    queue <string> q ;

    // inserting elements in queue
    q.push("ananya") ;
    q.push("manya") ;
    q.push("kritika") ;
    q.emplace("akki") ;

    //printing first element in queue
    cout << "first element " << q.front() << endl ;

    //removing first element
    q.pop() ;
    cout << "first element " << q.front() << endl ;

    //size
    cout << "size after pop " << q.size() << endl ;

    // empty all elemets in queue - TC = O(n)
    while (!q.empty()) {
        q.pop() ;
    }

    // swap two queues
    queue <string> qu ;
    qu.push("abc") ;
    qu.push("xyz") ;
    cout << "size of qu " << qu.size() << endl ; // -> 2
    qu.swap(q) ;
    cout << "size of qu " << qu.size() << endl ; // -> 4
    


    return 0;
}