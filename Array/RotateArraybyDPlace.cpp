// Rotate the Array by D place where D will be the user input

#include<iostream>
using namespace std;

void RotateArray(int arr[] , int n , int d){
    d = d % n;

    int temp[d];

    // store the user input in temp variable
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }

    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    for(int i = n-d; i<n; i++){
        arr[i] = temp[i - (n-d)];
    }
}

int main(){
    int arr[] = {3,4,5,6,7,8,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    int d;
    cin>>d;

    RotateArray(arr,n,d);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}