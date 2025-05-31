#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

class heap {

public:
    int arr[100];
    int size = 0;

    heap() {
        arr[0] = -1; // 1-based indexing
        size = 0;
    }

    void insert(int data) {  // TC: O(log n)
        size++;
        int index = size;
        arr[index] = data;

        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void deletefromheap() {  // TC: O(log n)
        if (size == 0) {
            cout << "Nothing to delete" << endl;
            return;
        }

        // Step 1: Put last element at root
        arr[1] = arr[size];
        size--;

        // Step 2: Heapify down
        int i = 1;
        while (i <= size) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if (left <= size && arr[largest] < arr[left]) {
                largest = left;
            }
            if (right <= size && arr[largest] < arr[right]) {
                largest = right;
            }

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Heapify function for external array
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

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout << "Heap after insertions: ";
    h.print();

    h.deletefromheap();
    cout << "Heap after deletion: ";
    h.print();

    // Build heap from array //o(n)
    int arr[6] = {-1, 54, 53, 55, 52, 50};  // 1-based indexing
    int n = 5;

    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }

    cout << "Array after heapify: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
