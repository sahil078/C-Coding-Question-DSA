// write a program to find the second smallest number in an array

#include<iostream>
using namespace std;

// function to find the second smallest number in array

int second_smallest(int arr[] , int n ){
    int smallest , second_smallest;

    if(arr[0] < arr[1]){
        smallest = arr[0];
        second_smallest = arr[1];
    }
    else{
        smallest = arr[1];
        second_smallest = arr[0];
    }

    for(int i=0; i<n; i++){
        if(smallest > arr[i]){
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_smallest && arr[i] > smallest){
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}

int main(){
    int arr[] = {10, 5, -4, 40, -10};
    int n = sizeof(arr)/sizeof(arr[0]);

    // printing the original Array
    cout<<"Original Array : ";
    for (int i=0; i < n ;i++){
        cout << arr[i] << " ";
    }

    int smallest = second_smallest(arr , 5);
    cout<<"\nSecond Smallest Number is: "<<smallest;
    return 0;

}