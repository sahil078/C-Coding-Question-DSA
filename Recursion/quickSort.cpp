// write a program to implement quick sort using recursion
#include<iostream>
#include<vector>
using namespace std;

// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int pivot = arr[high];
//         int i = (low - 1);
//         for (int j = low; j < high; j++) {
//             if (arr[j] < pivot) {
//                 i++;
//                 swap(arr[i], arr[j]);
//             }
//         }
//         swap(arr[i + 1], arr[high]);
//         int pi = i + 1;
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     vector<int> arr = {10, 7, 8, 9, 1, 5};
//     int n = arr.size();
//     quickSort(arr, 0, n - 1);
//     cout << "Sorted array: ";
//     for (int i : arr) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }



// optimized version of quick sort

// function to perform partitioning on left and right indices
int partition(vector<int> &arr, int st, int end) {
    int idx = st-1, pivot = arr[end];

    for(int j=st; j<end; j++ ) {
        if(arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

// function to perform quick sort
void quickSort(vector<int> &arr, int st, int end) {
    if(st < end) {
        int pvtIdx = partition(arr, st , end);
        quickSort(arr, st, pvtIdx-1);
        quickSort(arr, pvtIdx+1, end);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quickSort(arr, 0, n-1);

    for(int val : arr) {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}
