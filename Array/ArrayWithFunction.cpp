// array with function

#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    for (int i = 0 ;i <size;++i){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int num [15] = {2,4,6};

    printArray(num , 15);
    return 0;
}