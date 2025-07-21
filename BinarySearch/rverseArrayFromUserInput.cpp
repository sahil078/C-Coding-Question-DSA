// write a program to reverse the array , from next element where the user give the index input m =2

#include<iostream>
using namespace std;

// function to reverse by user input
void reverseByUserInput(int arr[], int n, int m){
    int start = m+1;   //here m is the user input from wherre the user want to reverse the array
    int end = n-1;

    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

// function to print the array
void printArr(int arr[] , int n){
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {3,5,6,7,89,78,45, 33};
    int n = sizeof(arr)/sizeof(arr[0]);

    int m; 
    cout<<"Enter the index where you want to reverse : ";
    cin>>m; 

    reverseByUserInput(arr , n , m);
    printArr(arr , n);

    return 0;
}