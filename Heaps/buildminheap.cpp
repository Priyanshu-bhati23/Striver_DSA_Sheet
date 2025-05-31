
#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr,int n,int i){
    int smallest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n && arr[left]<arr[smallest]){
        smallest=left;
    }
     if(right<=n && arr[right]<arr[smallest]){
        smallest=right;
    }
  if(smallest!=i){
    swap(arr[i],arr[smallest]);
  }
}


int main(){

    vector<int> arr = {-1, 54, 53, 55, 52, 50};  // 1-based indexing
    int n = 5;

    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }

    cout << "Array after heapify: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}