// appling sorting algorithm using stl library

#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[] = {5, 2, 8, 1, 9, 6,7};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout<<"the array before sorting is : \n ";
    // printing the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // applying sorting algorithm
    sort(arr, arr+n);

    cout<<"The array after appling the sorting algorithm: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}