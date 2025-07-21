// find the peak point of a array 

#include<iostream>
using namespace std;

// Function to find the peak element of arr

int findPeak(int arr[] , int n ){
    int start = 0 , end = n-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    int arr[] = {3,5,2,1};
    int n = sizeof(arr)/sizeof(arr[0]); 

    int FindPeak = findPeak(arr , 4 );
    cout<<"The peak element in array is at index : "<<FindPeak<<endl;

    return 0;

}