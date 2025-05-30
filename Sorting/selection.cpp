#include <iostream>
#include <vector>
//inplace
using namespace std;
//push the minimum in front

// Function to print the vector
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Selection sort function using vector
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    int temp;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }

        }
        temp=minIndex;
        // Swap if a smaller element was found
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
       
    }
    cout<<temp<<endl;
    cout << "Sorted array: ";
    printArray(arr);
}

int main() {
    vector<int> arr = {1, 4, 7, 5, 9, 4};
    cout << "Original array: ";
    printArray(arr);

    selectionSort(arr);

    return 0;
}
