class Deque {

    int* arr ;
    int front ;
    int rear ;
    int size ;

    Deque(int n) {
        size = n ;
        arr = new int[size] ;
        front = -1 ;
        rear = -1 ;
    }

    bool isFull() {

        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1))) {
            return true ;
        }
        else {
            return false ;
        }
    }

    bool isEmpty() {
        if (front == -1) {
            return true ;
        }
        else {
            return false ;
        }
    }

    int getRear() {
        if (isEmpty()) {
            return -1 ;
        }
        else {
            return arr[rear] ;
        }
    }

    int getFront() {
        if (isEmpty()) {
            return -1 ;
        }
        else {
            return arr[front] ;
        }
    }

    bool pushfront(int x) {

        // queue is full
        if (isFull()) {
            return false ;
        }

        // Queue is empty
        else if (isEmpty()) {
            front = rear = 0 ;
        }

        // to maintain continuity
        else if (front == 0 && rear != size - 1) {
            front = size - 1 ;
        }

        // normal execution
        else {
            front-- ;
        }
        arr[front] = x ;
        return true ;

    }

    bool push_rear(int x) {

        // queue is full
        if (isFull()) {
            return false ;
        }

        // Queue is empty
        else if (isEmpty()) {
            front = rear = 0 ;
        }

        // for continuation
        else if (front == 0 && rear != size - 1) {
            front = 0 ;
        }

        else {
            rear++ ;
        }

        arr[rear] = x ;
        return true ;

    }

    int popFront()
    {
       
       if (isEmpty()) {
           return -1 ;
       }

        int ans = arr[front] ;
        arr[front] = -1 ;

        if (front == rear) {
            front = rear = -1 ;
        }

        else if(front == size - 1) {
            front = 0 ;

        }
        else {
            front++ ;
        }
        return ans ;

    }

    int popRear()
    {
        // queue is empty
        if (isEmpty()) {
            return -1 ;
        } 

        int ans = arr[rear] ;
        arr[rear] = -1 ;
        if (front == rear) {
            front = rear = -1 ;
        }

        else if (rear == 0) {
            rear = size - 1;
            
        }

        else {
            rear-- ;
        }

        return ans ;
    }


};