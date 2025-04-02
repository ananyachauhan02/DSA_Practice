#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>


using namespace std;


bool comp(int ele1 , int ele2) {
    if (ele1 <= ele2) {
        return true ;
    }

    return false ;
}




int main() {

    int arr[5] = {8 , 4 , 1 , 2 , 4} ;

    vector<int> v ;
    v.push_back(1) ;
    v.push_back(9) ;
    v.push_back(6) ;
    v.push_back(7) ;
    v.push_back(1) ;


    // MAX & MIN
        int a = 3 ;
        int b = 5 ;
        cout << "max of a and b is " << max(a,b) << endl ;
        cout << "min of a and b is " << min(a,b) << endl ;
        cout << "max value in arr is " << *max_element(arr , arr+5) << endl ;
        cout << "min value in arr is " << *min_element(arr , arr+5) << endl ;
        cout << "max value in v is " << *max_element(v.begin() , v.end()) << endl ;
        cout << "min value in v is " << *min_element(v.begin() , v.end()) << endl ;


    // SWAP
        swap(a,b) ;
        cout << "value of a " << a << endl << "value of b " << b << endl ;


    // REVERSE
        string ab = "pqrs" ;
        reverse(ab.begin() , ab.end()) ;
        cout << "string after reversing " << ab << endl ;
        reverse(v.begin() , v.end()) ;
        reverse(arr , arr+4) ;


    // ROTATING VECTOR
        rotate (v.begin() , v.begin()+1 , v.end()) ;
        cout << "after rotate" << endl ;
        for (int i : v) {
            cout << i << " " ;
        }
        cout << endl ;


    // SORTING
        // this sorting algo is based on intro sort made of three sorting algo which are
        // quick sort, heap sort and insertion sort.
        sort(v.begin() , v.end()) ; // -> in case of vector
        sort(arr , arr+5) ; // -> in case of array
        cout << "after sort" << endl ;
        for (int i : v) {
            cout << i << " " ;
        } cout << endl ;


    // BINARY SEARCH - TC = O(n)
        // primary condition of binary search is that the elements should be sorted
        cout << "finding 6 using BS in V : " << binary_search(v.begin() , v.end() , 6) << endl ;
        cout << "finding 4 using BS in arr : " << binary_search(arr, arr + 5 , 4) << endl ;

    
    // LOWER AND UPPER BOUND - TC = O(n)
        // -> works only in sorted arrays 
        // -> implementation is through BS
        // lower bound -> return an iterator which is pointing to the first element which is not less than x
        auto vLB = lower_bound(v.begin() , v.end() , 6) ;
        cout << "finding lower bound in v : " <<  vLB - v.begin() << endl ;
        auto vUB = upper_bound (v.begin() , v.end() , 6) ;
        cout << "finding upper bound in v : " << vUB- v.begin() << endl ;
        auto arrLB = lower_bound(arr , arr+5 , 4) ;
        cout << "finding lower bound in arr : " << arrLB - arr << endl ;
        auto arrUB = upper_bound(arr , arr+5 , 4) ;
        cout << "finding upper bound in arr : " << arrUB - arr << endl ;



    // SUM
        int arrSum = accumulate(arr, arr+5 , 0);     // 0 is initial sum
        cout << "sum of arr is " << arrSum << endl ;
        int vSum = accumulate(v.begin(), v.end() , 0);     // 0 is initial sum
        cout << "sum of v is " << vSum << endl ;


    // COUNT
        int arrCnt = count(arr , arr+5 , 4) ;
        cout << "the occurence of 4 is " << arrCnt << endl ; 
        int vCnt = count(v.begin() , v.end() , 1) ;
        cout << "the occurence of 1 is " << vCnt << endl ;


    // FIND
        // returns an iterator pointing to the first instance of that element or else
        // it returns pointing to the end() if it is not there
        auto arrF = find(arr , arr+5 , 1) ;
        cout << "element 1 in arr is at position " << arrF - arr << endl ;
        auto VF = find(v.begin() , v.end() , 9) ;
        cout << "element 9 in v is at position " << VF - v.begin() << endl ; 


    // NEXT PERMUTATION
        // -> will return true if it converts string into next permutation
        bool res1 = next_permutation(v.begin() , v.end()) ;
        cout << "next permutation in v is " << res1 << endl ;
        bool res2 = next_permutation(arr , arr+5) ;
        cout << "next permutation in arr is " << res2 << endl ;

    // PREV PERMUTATION
        // -> will return true if it converts string into prev permutation
        bool res1 = prev_permutation(v.begin() , v.end()) ;
        cout << "prev permutation in v is " << res1 << endl ;
        bool res2 = prev_permutation(arr , arr+5) ;
        cout << "prev permutation in arr is " << res2 << endl ;


    // COMPARATORS
        sort(arr, arr+5 , comp) ; // -> sorts everything in descending order
        // greater<int> is an inbuilt comparator which works if you want to do this in
        // descending order
        sort(arr , arr + 5 , greater<int>) ;

}
