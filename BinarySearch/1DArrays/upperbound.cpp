/*
QUESTION:
Given an unsorted array Arr[] of N integers and an integer X, find floor and ceiling of X in Arr[0..N-1].

Floor of X is the largest element which is smaller than or equal to X. Floor of X doesn’t exist if X is smaller than the smallest element of Arr[].

Ceil of X is the smallest element which is greater than or equal to X. Ceil of X doesn’t exist if X is greater than the greatest element of Arr[].

Example:

Input:
N = 8, X = 7
Arr[] = {5, 6, 8, 9, 6, 5, 5, 6}
Output: 6 8
Explanation:
Floor of 7 is 6 and ceil of 7 is 8.

APPROACH:
1. Sort the array in ascending order.
2. Use binary search to find the floor and ceil values.
3. The floor value is the largest element smaller than or equal to X, and the ceil value is the smallest element greater than or equal to X.
4. If the floor or ceil values are not found, set them to -1.

CODE:
*/

#include<bits/stdc++.h>
using namespace std;



int upper_b(vector<int> &arr,int n,int ubtarget){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high){
        if(arr[mid]>=ubtarget){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}


int main(){

vector<int>arr={1,2,3,4,5,5,6,7,8};
cout<<"enter the targe to";
int n;
cin>>n;
cout<<"inded is"<<upper_b(arr,arr.size(),n);











    return 0;
}