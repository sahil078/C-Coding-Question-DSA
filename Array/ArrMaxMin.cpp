// Find the max number and min number from array

#include<iostream>
using namespace std;

// for getting the maximun value
int getMax(int arr[] , int n){

    int max = INT16_MIN;

    for(int i=0; i<=n; i++){
        if (arr[i] > max){
            max  = arr[i];
        }
    }

    // returning the max value
    return max;
}

// for getting the minumum value
int getMin(int arr[] , int n){

    int min = INT16_MAX ;

    for(int i=0; i<=n; i++){
        if (arr[i]<min){
            min   = arr[i];
        }
    }

    // returning the minimum value
    return min;
}

int main(){
    int size;
    cout<<"Enter Size of Array(according index): "; 
    cin>>size;

    int num[100];

    for(int i=0; i<=size; i++){
        cin>>num[i];
    }


    cout<<"The Maximum value is : "<<getMax(num , size)<<endl;

    cout<<"The Minimum value is : "<<getMin(num , size)<<endl;
    return 0;
}

