//it is inplace sorting 
//takes an element and places it in correct order
#include<bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}


void insertionSort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        int j=i;
        while(j>0&& arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    printArray(arr);
}
int main() {
    vector<int> arr = {1, 34, 7, 5, 9, 4};
    cout << "Original array";
    printArray(arr);

    insertionSort(arr);

    return 0;
}
