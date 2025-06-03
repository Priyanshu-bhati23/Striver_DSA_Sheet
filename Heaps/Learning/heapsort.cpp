#include <bits/stdc++.h>
using namespace std;
#include<queue>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n) {  //tc-o(logn)
    int size = n;
    while (size > 1) {
        // Step 1: Swap first and last elements in the current heap
        swap(arr[1], arr[size]);
        size--;

        // Step 2: Heapify from root
        heapify(arr, size, 1);
    }
}

int main() {
    int arr[6] = {-1, 54, 53, 55, 52, 50}; // 1-based indexing
    int n = 5;

    // Build max heap
    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }

    cout << "Array after heapify: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Perform heap sort
    heapsort(arr, n);

    cout << "Array after heapsort: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    cout<<"using priority queue here"<<endl;
    priority_queue<int> pq;
//MAX HEAP
    pq.push(4);
    pq.push(6);
    pq.push(7);
    pq.push(9);

    cout<<"element at top"<<pq.top()<<endl;
    pq.pop();
    pq.pop();
    pq.pop();
    pq.pop();

    cout<<"element at top"<<pq.top()<<endl;

    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }else{
        cout<<"pq is not empty";
    }

    return 0;
}
