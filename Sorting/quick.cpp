#include<bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}



int partition (vector<int> &arr, int low, int high) {
int pivot=arr[low];
int i=low;
int j=high;
while(i<j){
    while(arr[i]<=pivot && i<=high-1){
        i++;
    }
    while(arr[j]>pivot && j>=low){
             j--;

    }
    if(i<j) swap(arr[i],arr[j]);
}
return j;

}
void qs(vector<int> &arr,int low,int high){
if(low<high){
    int pIndex=partition(arr,low,high);
    qs(arr,low,pIndex-1);
    qs(arr,pIndex+1,high);
}
}

void  quicksort(vector<int> &arr,int n){
qs(arr,0,n-1);
printArray(arr);
}



int main(){

vector<int> arr={2,3,5,6,7,8};
int n=arr.size();

quicksort(arr,n);
}
