// count all the sub array present in the array


#include<iostream>
using namespace std;

// int subArray(int arr[] , int n){
//     for(int start = 0; start < n; start++){

//         for(int end = start; end < n; end++){

//             // To Print all the sub array
//             for(int i = start; i <= end; i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//     cout<<endl;
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     cout<<"the Sub Arrays are : "<<subArray(arr , size)<<endl;
// }


// BrootForse Approach to solve how to find max Sum of Sub arrays in array


// int maxSubArraySum(int arr[], int n){
//     int maxSum = INT16_MIN;

//     for(int str = 0; str < n; str++){
//         int currSum = 0;

//         for(int end = 0; end < n; end++){
//                 currSum += arr[end];
//                 maxSum = max( currSum , maxSum);
//         }
//     }
//     cout<<"The sum of Max Sum array is :" << maxSum << endl;
// }

// int main(){
//     // int arr[] = {1,2,3,4,5};
//     int arr[] = {3, -4, 5, 4, -1, 7, -8};
//     int size = sizeof(arr)/sizeof(arr[0]); 

//     maxSubArraySum(arr , size);
// }


// Optimaized Solution to find the max sum of sub array using Kadane's algorithm

int maxSubArraySum(int arr[], int n){
    int currSum = 0 , maxSum = INT16_MIN;

    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(currSum , maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    // int arr[] = {1,2,3,4,5};
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr)/sizeof(arr[0]); 

    cout<<maxSubArraySum(arr , size);
}