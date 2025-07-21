// appling binary search using stl library
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {2, 3, 4, 10, 5 , 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    // appling the sorting algorithm
    sort(arr , arr+n);
    cout << "Sorted array is : ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    // applying binary search
    if(binary_search(arr , arr+n , 4)){
        cout << "Element is present in array" << endl;
    }
    else{
        cout<<"Element is not present in array";
    }
}