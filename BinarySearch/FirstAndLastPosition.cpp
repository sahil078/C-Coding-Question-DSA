// First and last Occurence  of a element in a shorted array

#include<iostream>
using namespace std;

// function to find the first occurence of element
int firstOcc(int arr[] , int n , int key){
    int start=0 , end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;   
    }
    return ans;
}


// function to find the last Occurence of the element
int LastOcc(int arr[], int n, int key){
    int start = 0 , end = n-1;
    int mid = start + (end -start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid ;
            start = mid+1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[] = {2,3,4,5,5,5,5,6,7,8};

    cout<<"First occurene of 5 is "<<firstOcc(arr , 10 , 5 )<<endl;

    cout<<"Last occurene of 5 is "<<LastOcc(arr , 10 , 5 )<<endl;


    return 0;
}