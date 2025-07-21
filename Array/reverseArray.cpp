// reverse the array

#include<iostream>
using namespace std;

void swapArr(int arr[] , int n ){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[end],arr[start]);
        start++;
        end--;
    }
}

// for printing the array
void printArray(int arr[] , int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5] = {2,3,4,5,6};
    int arr2[6] = {2,3,4,5,6,-10};

    swapArr(arr1 , 5);
    printArray(arr1 , 5 );

    swapArr(arr2 , 6);
    printArray(arr2 , 6);

    return 0;
}