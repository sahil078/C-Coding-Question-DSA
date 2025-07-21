// find the Unique element in array

#include<iostream>
using namespace std;

// for finding the unique element in array

int findUnique(int arr[] , int n){
    int ans = 0;

    for(int i=0; i<n; i++){
        ans =ans^arr[i]; // xor all elements of array to get one single number which is not repeated.
    }
    return ans;
}

int main(){
    int size; 
    cout<<"Enter size of Array: "; 
    cin>>size;

    int arr[100];

    // taking input from user
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int unique = findUnique(arr , size);

    cout<<"The unique element in array is : "<<unique<<endl;

}