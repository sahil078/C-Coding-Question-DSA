//  WAP To find the largest element of a given array of Integers: 

#include<iostream>
using namespace std;

// function to find largest element
int findLargest(int arr[], int n) {
    int max = INT16_MIN;
    // traversing the array
    for (int i=0; i <n ;i++) {
        if ( max < arr[i] ) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {15,2,9,4,5,112};

    int max = findLargest(arr , 6);

    cout<<"THe largest element in array is : "<< max<<endl;
    return 0;
}