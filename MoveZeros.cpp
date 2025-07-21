// write a program to move all the zero at right side

#include<iostream>
using namespace std;

// function to move all zeros at right side
void moveZero(int arr[] , int n){
    int i=0;

    for(int j=0; j<n; j++){
        if(arr[j] !=0){
            swap(arr[j] , arr[i]);
            i++;
        }
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
    int arr[] = {0,2,4,0,0,5,9};

    moveZero(arr , 7);
    cout<<"After moving All zero at right side: \n";
    printArray(arr , 7);

    return 0;
}