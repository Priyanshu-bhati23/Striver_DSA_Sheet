#include<bits/stdc++.h>
using namespace std;
//divide and merge
//better time complext much more optimised sorting algo 
//not in place


void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}


void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right <=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;

    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low ;i<=high;i++){
        arr[i]=temp[i-low];
    }

    
}
void mS(vector<int> &arr,int low,int high){


    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
    printArray(arr);
}

void mergesort(vector<int> &arr,int n){
    mS(arr,0,n-1);
}


int main() {
    vector<int> arr = {1, 34, 7, 5, 9, 4};
    cout << "Original array: ";
    printArray(arr);

    int n=arr.size();
    mergesort(arr,n);

    return 0;
}
