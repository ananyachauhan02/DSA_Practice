// Implement a Queue - CODESTUDIO
// TC - O(1) , SC - O(n)

class Queue {

    int* arr ;
    int qfront ;
    int qrear ;
    int size ;

    public :
    Queue() {
        size = 100001 ;
        arr = new int[size] ;
        qfront = 0 ;
        qrear = 0 ;
    }

    bool isEmpty() {
        if (qfront == qrear) {
            return true ;
        }
        else {
            return false ;
        }
    }

    void enque(int data) {

        if (qrear == size) {
            cout << "Queue is full " << endl  ;
        }
        else {
            arr[qrear] = data ;
            qrear++ ;
        }
    }

    void deque() {

        if (qfront == qrear)  {
            cout << "Quese is empty" << endl ;
        }
        else {
            arr[qfront] = -1 ;
            qfront++ ;
            if (qfront == qrear) {
                qfront = 0 ;
                qrear = 0 ;
            }
        }
    }

    int front() {
        if (qfront == qrear) {
            return -1 ;
        }
        else {
            return arr[qfront] ;
        }
    }
};