// Program for binary Search

#include<iostream>
using namespace std;

// function for binary search

int binarySearch(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key) {
            return mid;
        }

        // go to right part
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}


int main(){
    int even[6] = {4,6,7,9,12,15};
    int odd[5] = {4,6,7,9,12};

    int evenIndex = binarySearch(even , 6 , 9);
    cout<<"The index of 9 is " << evenIndex<<endl;

    int oddIndex = binarySearch(odd , 5 , 12);
    cout<<"The index of 12 is "<< oddIndex <<endl;

    return 0;

}