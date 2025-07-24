#include <iostream>
#include <algorithm>
using namespace std;

// Function to reverse the array from index start to end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to find the pivot (first element from the end which is smaller than next)
int findPivot(int arr[], int n) {
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            return i; // found pivot
        }
    }
    return -1; // no pivot found, the sequence is in descending order
}

// Function to perform next permutation
void nextPermutation(int arr[], int n) {
    int pivot = findPivot(arr, n);

    if (pivot == -1) {
        // If no pivot, reverse entire array (last permutation → first permutation)
        reverse(arr, 0, n - 1);
        return;
    }

    // Find rightmost element greater than pivot and swap
    for (int i = n - 1; i > pivot; i--) {
        if (arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // Reverse the suffix (everything after pivot)
    reverse(arr, pivot + 1, n - 1);
}

int main() {
    int arr[] = {2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    nextPermutation(arr, n);

    cout << "Next permutation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
