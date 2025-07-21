// Find the smallest element in array

#include<iostream>
using namespace std;

// function to find the smallest element in array

int findSmallest(int arr[] , int n ){
    int min = INT16_MAX;

    // traversing the array
    for(int i=0; i<n; i++){
        if(min > arr[i] ){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[] = {10, 25, 37, 49 , -7};

    int min = findSmallest(arr , 5);

    cout<<"The smallest element in array is : "<<min<<endl;

    return 0;
}