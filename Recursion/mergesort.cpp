// write the program to sort an array using merge sort algorithm

#include<iostream>
#include<vector>
using namespace std;

// function to merge two sorted parts of the array
void merge(vector<int> &arr , int st , int mid  , int end) {
    vector<int> temp; // temporary array
    int i=st , j=mid+1;

    // merge two sorted parts
    while( i<=mid && j<=end) {
        if(arr[i] <= arr[j] ) {
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // copy remaining elements of left part
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // copy remaining elements of right part
    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // copy the elements from temp to original array
    for(int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
}


int mergeSort(vector<int> &arr , int st , int end) {
    if(st < end) {
        int mid =st + (end-st)/2;

        // left part sort
        mergeSort(arr , st , mid);

        // right part sort
        mergeSort(arr , mid+1 , end);

        // merge two sorted parts
        merge(arr , st, mid , end);
    }else{
        return -1;
    }
    return 0;
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();
    // call thefunction
    mergeSort(arr , 0 , n-1);
    // merge sort function
    for(int val : arr) {
        cout<<val << " ";
    }
    cout<<endl;
    return 0;
}