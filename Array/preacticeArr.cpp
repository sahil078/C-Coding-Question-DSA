// find max min of the array

// #include<iostream>
// using namespace std;

// // function to find max
// int getMax(int arr[] ,int n){
//     int max = INT16_MIN;

//     for(int i = 0; i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     return max;
// }

// // function to get min 
// int getMin(int arr[] , int n ){
//     int min = INT16_MAX;

//     for(int i=0; i<n; i++){
//         if(arr[i] < min){
//             min = arr[i];
//         }
//     }
//     return min;
// }

// int main(){
//     int size =5;
//     int arr[size];

//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     cout<<getMax(arr , size)<<endl;
//     cout<<getMin(arr , size)<<endl;

// }


// Perform Linear Search

// #include<iostream>
// using namespace std;

// int linear (int arr[] , int n , int target){
//     for(int i = 0; i < n; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[5] = {1,2,3,4,6};

//     cout<<linear(arr , 5, 6);
// }



// Reverse the array

#include<iostream>
using namespace std;

int reverse(int arr[] , int n){
    int first = 0;
    int last = n - 1;

    while(first < last){

            swap(arr[first], arr[last]);
            first++;
            last--;
        // return arr[i];
    }
}


int main(){
    int arr[5] = {1,2,3,4,5};

    reverse(arr , 5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}