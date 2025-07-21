// scope of a Array

#include<iostream>
using namespace std;

void update(int arr[] , int n){
    cout<<"Inside the function"<<endl;

    // updating the array
    arr[0] = 30;

    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n Outside the function" <<endl;
}

int main(){
    int arr[5] = {4,5,6,7,8};

    update(arr , 4);

    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}