// Linear Search

#include<iostream>
using namespace std;

bool search (int arr[] , int size , int elem){
    for(int i=0; i<=size ; i++){
        if(arr[i] == elem){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {1,2,3,8,7,12,15,5,4,6};

    cout<<"Enter the element to search for: ";
    int key; 
    cin>>key;

    bool found = search(arr , 10 , key);

    if(found){
        cout<< key << " Is Present in Array";
    }
    else{
        cout<< key <<" IS Not Present in Array";
    }

    return 0;
}