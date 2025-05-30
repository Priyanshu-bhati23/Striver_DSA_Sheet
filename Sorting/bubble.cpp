//push the max to the last 
//inplace
#include<bits/stdc++.h>
using namespace std;
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void buubleSort(vector<int> &arr){

    for(int i=0;i<arr.size();i++){
        int didSwap=0;
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
                didSwap=1;
            }

        }
        if(didSwap==0){
            break;
        }
    }
    printArray(arr);

}




int main() {
    vector<int> arr = {1, 4, 7, 5, 9, 4};
    cout << "Original array: ";
    printArray(arr);

    buubleSort(arr);

    return 0;
}