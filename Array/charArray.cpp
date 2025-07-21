// creating the array of char

#include<iostream>
using namespace std;

void printchar(char arr[] , int size){
    for(int i=0; i<=size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    char ch[5] ={'a', 'b', 'c', 'd', 'e'};
    printchar(ch , 5);
    return 0;
}