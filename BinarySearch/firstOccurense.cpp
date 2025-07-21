// find the first occurence of the element

#include<iostream>
using namespace std;

// function to find the first occurence of the element

int firstOcc(int arr[] , int n , int key){
    int start=0 , end = n-1;
    int mid = start + (end-start)/2; 
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

    mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout<<"The first Occurence of 5 is at Index : "<< firstOcc(arr , 6 , 5) <<endl;

    return 0;
}