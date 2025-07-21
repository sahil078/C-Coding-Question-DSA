// Find the elements which has Atleast two greater Elements:=

#include<iostream>
using namespace std;

// function to find the number which has atlest two greater elements

void greater_element(int arr[] , int n ){
    cout<<"\n Elements which has atleast two greater elements: ";

    for(int i=0; i<n; i++){
        int grt = 0; 
        for(int j=0; j<n; j++){
            if(arr[j] > arr[i]){
                grt++;
            }
        }
        if(grt >= 2){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[] = {40, 19, 70, 8,90 ,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }

    greater_element(arr , 5);
    return 0;
}