// Circular Queue - CODESTUDIO
// TC - O(n) , SC - O(n)

class CircularQueue{

    int* arr ;
    int front ;
    int rear ;
    int size ;

    public:

    CircularQueue(int n) {
        size = n ;
        arr = new int[size] ;
        front == -1 ;
        rear == -1 ;
    }

    bool enqueue(int value) {

        // queue is full
        if ((front == 0 && rear == size - 1 ) || (rear = (front - 1) % (size - 1))) {
            return false ;
        }

        // queue is empty
        if (front == -1) {
            front = rear = 0 ;
            arr[rear] = value ;
        }

        // for queue continuation
        else if (rear == size - 1 && front != 0) {
            rear = 0 ;
            arr[rear] = value ;
        }

        // for normal execution
        else {
            rear++ ;
            arr[rear] = value ;
        }
    }

    int dequeue() {
        // queue is empty
        if (front == -1) {
            return -1 ;
        }

        int ans = arr[front] ;
        arr[front] = -1 ;
        // single element is present
        if (front == rear) {
            front = rear = -1 ;
        }

        // for queue continuation
        else if (front == size - 1) {
            front = 0 ;
        }

        // normal flow
        else {
            front++ ;

        }
        return ans ;


        
    }



};
