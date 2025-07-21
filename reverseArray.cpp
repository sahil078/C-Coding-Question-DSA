// write a program to reverse the array

#include<iostream>
using namespace std;

// function to reverse the array
void reverseArray(int arr[] , int n){

    int s =0 , e =n-1;

    for(int i=0; i<n-1; i++){
        swap(arr[s] , arr[e]);
        s++;
        e--;
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
    int arr[] = {1,2,3,4,5};

    // calling the reverseArray function
    reverseArray(arr , 5);
    cout<<"The reversed array is: \n";
    printArray(arr , 5);

    return 0;
}