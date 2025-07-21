// Write a Program to find the largest three element in and array

#include<iostream>
using namespace std;

// function for three largest element

void threeLargest(int arr[] , int n){
    int i, first , second , third;
    if (n < 3) {
        cout << "Invalid Input";
    }

    third=first=second=INT16_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third){
            third = arr[i];
        }
    }
    cout<<"\n Three Largest Element are : "<< first << " , "<< second <<" , "<<third<<endl;
}

int main(){
    int arr[] ={7 , 9 , 11 , 240 , 56 , 70};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array: ";

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    threeLargest(arr , 6);
    return 0;
}