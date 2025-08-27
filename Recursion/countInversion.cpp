// write a program to count inversion in an array using merge sort

#include<iostream>
#include<vector>
using namespace std;

// brute force approach

//  int countInversion(vector<int> &arr) {
//     int n = arr.size();
//     int count = 0;
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(arr[i] > arr[j]) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// optimized approach using merge sort
int merge(vector<int> &arr, int st, int end, int mid) {
    vector<int> temp;
    int i= st, j=mid+1;
    int invCount = 0;

    while(i<=mid && j<=end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[i]);
            j++;
            invCount += (mid - i + 1); // all the elements from i to mid are greater than arr[j]
        }
    }

    while( i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
    return invCount;
}

int mergeSort(vector<int> &arr, int st , int end) {
    if(st < end) {
        int mid = st + (end - st) / 2;

        int leftInversions = mergeSort(arr, st, mid);
        int rightInversions = mergeSort(arr, mid+1, end);
        int mergeInversions = merge(arr, st, end, mid);

        return leftInversions + rightInversions + mergeInversions;
    }
    return 0;
}

int main(){
    vector<int> arr = {6,3,5,2,7};
    int ans = mergeSort(arr, 0, arr.size()-1);
    cout << "Number of inversions: " << ans << endl;
    return 0;

}