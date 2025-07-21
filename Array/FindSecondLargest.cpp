// write a program to find the second largest element in the array 

#include<iostream>
using namespace std;
// Function to find the second largest element in array
int secondLargest(int arr[] , int n){
    int largest = 0 , secondLargest = -1;

    // find the largest element in array
    for(int i=1; i<n; i++){
        if (arr[i] > arr[largest]){
            largest = i;
        } 
    }

    // finding the second largest element in array
    for(int i=0 ; i < n ; i++) {
        if(arr[i] != arr[largest]){
            // changing the value of second largest
            if(secondLargest == -1){
                secondLargest = i;
            }
            else if(arr[i] > arr[secondLargest]){
                secondLargest = i;
            }
        }
    }
    return secondLargest;
}

int main(){
    int arr[] = {10,20,30,40,35};
    int n = sizeof(arr) / sizeof(arr[0]);

    int second_largest = secondLargest(arr , n);

    if(second_largest == -1){
        cout << "No Second Largest Element Found"<<endl;
    }
    else{
        cout << "Second Largest Element is : " << arr[second_largest];
    }

    return 0;
}