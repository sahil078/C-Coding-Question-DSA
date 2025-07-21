// swap the Array Alternate

#include<iostream>
using namespace std;

//  Swap Alternate
void swapAlter(int arr[] , int n){
    for(int i=0; i<n; i=i+2){

    // check the condition that index+1 is under the array

        if(i+1 < n){
            swap(arr[i] , arr[i+1]);
        }
    }
}

// Printing the array
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int evenArr[5] = {7,4,8,9,3};
    int oddArr[8] = {3,5,6,8,9,2,1,4};


    swapAlter(evenArr , 5);
    printArray(evenArr , 5);

    swapAlter(oddArr , 8);
    printArray(oddArr , 8);

}