// Merge Two Heaps(max) - codestudio , gfg

// TC - O(m+n) 

void heapify(vector<int> arr , int n , int i) {

    // zero based indexing
    int i = largest ;
    int left = 2*i + 1 ;
    int right = 2*i + 2 ;

    if (left < n && arr[largest] < arr[left]) {
        largest = left ;
    }

    if (right < n && arr[largest] < arr[right]) {
        largest = right ;
    }

    if (largest != i) {
        swap(arr[largest] , arr[i]) ;
        heapify(arr , n , largest) ;
    }
}

vector<int> mergeHeaps(vector<int> arr1 , vector<int> arr2 , int m , int n) {

    vector<int> ans ;
    for(auto i : arr1) {
        ans.push_back(i) ;
    }

    for(auto i : arr2) {
        ans.push_back(i) ;
    }

    int size = ans.size() ;
    for (int i = n/2 - 1 ; i >= 0 ; i--) {
        heapify(ans , size , i) ;
    }
    return ans ;

}