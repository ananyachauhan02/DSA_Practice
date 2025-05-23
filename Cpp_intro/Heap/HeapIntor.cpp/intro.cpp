#include<bits/stdc++.h>

using namespace std ;

class heap {
    public :
    int arr[100] ;
    int size = 0 ;

    heap() {
        arr[0] = -1 ;
        size = 0 ;
    }

    void insert(int val) {

        size = size + 1 ;
        int index = size ;
        arr[index] = val ;

        while (index > 1) {
            int parent = index / 2 ;

            if (arr[parent] < arr[index]) {
                swap(arr[parent] , arr[index]) ;
                index = parent ;
            }
            else {
                return ;
            }
        }
    }

    void print() {
        for (int i = 1 ; i <= size ; i++) {
            cout << arr[i] << " " ;
        }
        cout << endl ;
    }


    void deletion() {
        if (size == 0) {
            cout << "nothing to delete" << endl ;
            return ;
        }

        // step 1 : put last element into first index
        arr[1] = arr[size] ;

        // step 2 : remove last elemenet
        size-- ;

        // step 3 : take root node to it's correct position
        int i = 1 ;
        while (i < size) {
            int leftIndex = 2*i ;
            int rightIndex = 2*i + 1 ;

            if (leftIndex < size && arr[i] < arr[leftIndex]) {
                swap(arr[i] , arr[leftIndex]) ;
                i = leftIndex ;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])  {
                swap(arr[i] , arr[rightIndex]) ;
                i = rightIndex ;
            }
            else {
                return ;
            }
        }
    }

};

// heapify algorithm

void heapify(int arr[] , int n , int i) {

    int largest = i ;
    int left = 2*i ;
    int right = 2*i + 1 ;

    if (left <= n && arr[largest] < arr[left]) {
        largest = left ;
    }

    if (right <= n && arr[largest] < arr[right]) {
        largest = right ;
    }

    if(largest != i) {
        swap(arr[largest] , arr[i]) ;
        heapify(arr , n , largest) ;
    }
}

void heapSort(int arr[] , int n) {

    int size = n ;

    while (size > 1) {
        // step 1 : swap
        swap(arr[size] , arr[1]) ;
        size-- ;

        // step 2 
        heapify(arr , size , n) ;
    }
}

int main() {

    heap h ;
    h.insert(50) ;
    h.insert(55) ;
    h.insert(53) ;
    h.insert(52) ;
    h.insert(54) ;

    cout << "before " << endl ;
    h.print() ;

    h.deletion() ;
    cout << "after deletion of root node" << endl ;
    h.print() ;

    int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50} ;
    int n = 5 ;

    // heap creation
    for (int i = n/2 ; i > 0 ; i--) {
        heapify(arr , n , i) ;
    }
    cout << "printing the array now " << endl ;
    for (int i = 1 ; i <= n ; i++) {
        cout << arr[i] << " " ;
    } cout << endl ;

    // heap sort
    heapSort(arr , n) ;
    cout << "printing the array after heap sort " << endl ;
    for (int i = 1 ; i <= n ; i++) {
        cout << arr[i] << " " ;
    } cout << endl ;


    cout << "using priority queue " << endl ;

    // max heap 
    priority_queue<int> pq ;

    pq.push(4) ;
    pq.push(2) ;
    pq.push(3) ;
    pq.push(5) ;

    cout << "element at the top " << pq.top() << endl ;
    pq.pop() ;
    cout << "element at the top " << pq.pop() << endl ;
    cout << "size " << pq.size() ;
    if (pq.empty()) {
        cout << "pq is empty" << endl ;
    }
    else {
        cout << "pq is not empty "<< endl ;
    }

    // min heap
    priority_queue<int , vector<int> , greater<int> > minheap ;

    minheap.push(4) ;
    minheap.push(2) ;
    minheap.push(3) ;
    minheap.push(5) ;
    minheap.push(1) ;

    cout << "element at the top " << minheap.top() << endl ;
    minheap.pop() ;
    cout << "element at the top " << minheap.pop() << endl ;
    cout << "size " << minheap.size() ;
    if (minheap.empty()) {
        cout << "minheap is empty" << endl ;
    }
    else {
        cout << "minheap is not empty "<< endl ;
    }


    return 0 ;
}