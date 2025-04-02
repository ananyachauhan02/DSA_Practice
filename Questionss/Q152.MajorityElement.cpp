// majority element - leetcode , codestuido , gfg

int majorityElement(int arr[] , int size) {

    unordered_map<int , int> mp ;

    for (for int i = 0 ; i < size ; i++) {
        mp[arr[i]]++ ;
    }

    for (auto i : mp) {
        if (i.second > size/2) {
            return i.first ;
        }
    }

    return -1 ;
}