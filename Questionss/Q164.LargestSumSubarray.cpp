// maximum sum subarray (Kadane's Algorithm) - leetcode , gfg , codestudio


// approach 1 - using two pointers , two for loops - TC = O(n^2)


// approach 2 - TC - O(n)

int findMax(int arr[] , int n) {

    int currSum = 0 ;
    int maxSum = INT_MIN ;

    for(int i = 0 ; i < n ; i++) {
        currSum += arr[i] ;

        maxSum = max(maxSum , currSum) ;

        if (currSum < 0) {
            currSum = 0 ;
        }
    }

    return maxSum ;
}