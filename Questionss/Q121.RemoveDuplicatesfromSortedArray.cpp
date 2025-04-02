// Remove Duplicates from Sorted Array - Codestudio , leetcode

#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	int size = 1 ;

	for (int i = 1 ; i < n ; i++) {
		if (arr[i] != arr[i - 1]) {
            arr[size] = arr[i] ;
			size++ ;
		}
	}
	return size ;
}