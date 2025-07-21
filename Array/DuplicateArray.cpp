// find the duplicate  in Array

#include<iostream>
using namespace std;

int findDuplicate(int arr[] , int size){
    int ans = 0;

    for (int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;

    for(int i=0; i<size; i++){
        ans = ans^i;
    }
    return ans;

}

int main(){
    int arr[6] = {4,7,4,6};

    int findDupli = findDuplicate(arr , 4);
    cout<<findDupli <<endl;
    return 0;
}