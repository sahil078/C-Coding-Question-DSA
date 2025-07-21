// write a program to rotate the array by the value of k if k=2 and right shift the element of array by 2

#include<iostream>
using namespace std;
// function to rotate the array
void rotateArray(int arr[] , int n , int d){
    int temp[d];
    for (int i = 0; i < d; i++)
        {
        temp[i] = arr[i];
        }
    for (int i = d; i < n; i++)
        {
        arr[i - d] = arr[i];
        }
    for (int i = n - d, j = 0; i < n; i++, j++)
        {
        arr[i] = temp[j];
        }
}

// function to print the array
void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k ;
    cout<<"Enter the value of k (to rotate): ";
    cin>>k;

    rotateArray(arr , n , k);

    cout<<"After rotating the array by "<<k<<"the array is : "<<endl;
    printArray(arr , n);

    return 0;
}