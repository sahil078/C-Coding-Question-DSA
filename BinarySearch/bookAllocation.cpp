/*
Given an array arr of integer numbers. where arr[i] represents the number of pages in the book . there are 'm' number of students  and the tasks is to allocate all the books to their students . Allocate books in such way that: 

1. Each students get atleast one book
2. Each book should be allocated to a student.
3. book allocation should be in contiguous manner
*/


#include<iostream>
using namespace std;

// function to check the possible solution

bool isPossible(int arr[] , int n , int m , int mid){

    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;

            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

// function for book Allocation

int allocateBook(int arr[] , int n , int m){
    int start = 0;
    int sum = 0;
    // loop through the array and find out which is the first element that can be allocated

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int end = sum ;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(isPossible(arr , n , m , mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}

int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 80};
    int m ; //number of students
    cout<<"Enter the number of students: ";
    cin>>m;

    int bookAllocation = allocateBook(arr , 5 , m);

    cout<< bookAllocation <<endl;

    return 0;

}