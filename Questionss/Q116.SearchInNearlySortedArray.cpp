// search in nearly sorted array

int search(int arr[] , int n , int target) {

    int s = 0 ;
    int e = n -1 ;
    int mid = s + (e-s)/2 ;

    while (s<=e) 
    {
        mid = s+(e-s)/2 ;
        if (arr[mid] == target) {
            return mid ;
        }
        if (arr[mid -1] == target) {
            return mid -1 ;
        }
        if (arr[mid + 1] == target) {
            return mid + 1 ;
        }

        if (arr[mid] > target) {
            e = mid - 2 ;
        }
        else {
            s = mid + 2 ;
        }
    }

    return -1 ;
}
