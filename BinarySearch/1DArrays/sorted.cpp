/*
QUESTION:
Given an array arr[] of size N, check if it is sorted in non-decreasing order or not.

APPROACH:
- We can use a recursive approach to check if the array is sorted in non-decreasing order or not.
- The base case for recursion is when the subarray has only one element or when the subarray is empty, in which case we consider it to be sorted.
- For a non-empty subarray, we compare the middle element with its next element. If they are in non-decreasing order and both the left and right subarrays are also sorted, then we consider the entire array to be sorted.
- We recursively check the left and right subarrays using the same approach.
- If any of the recursive calls returns false, we return false. Otherwise, we return true.

Example:

Input:
N = 5
arr[] = {10, 20, 30, 40, 50}
Output: 1
Explanation: The given array is sorted.

CODE:
*/


#include<bits/stdc++.h>
using namespace std;




#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int low, int high) {
    if (low >= high) return true;  // base case: 1 or 0 elements are sorted by definition

    int mid = low + (high - low) / 2;

    // Check current mid and mid+1
    if (arr[mid] > arr[mid + 1]) return false;

    // Recursively check left and right halves
    return isSorted(arr, low, mid) && isSorted(arr, mid + 1, high);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    if (isSorted(arr, 0, arr.size() - 1))
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";
    return 0;
}
