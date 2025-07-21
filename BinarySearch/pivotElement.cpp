// find the pivot element in an array

#include<iostream>
using namespace std;

// function to find pivot element
int findPivot(int arr[] , int n){
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] > arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[]={3,5,7,8,4,3};

    cout<<"Pivot element is at index : "<<findPivot(arr , 6)<<endl;

    return 0;
}