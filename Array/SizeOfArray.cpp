// COunt the Size of Array

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,4,9,3,4,55,67,8 ,5,8,9,6,4,2,1,4,5,7,8,9,9};

    int arrSize = sizeof(arr) / sizeof(int);
    cout<<"this size of array = "<<arrSize<<endl;
    return 0;
}