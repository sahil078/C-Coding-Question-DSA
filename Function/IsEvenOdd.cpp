// Check the number is even or ODd

#include<iostream>
using namespace std;
//1 -> Even
// -> Odd
bool IsEven(int a){
    if (a & 1){
        return 0;
    }
    return 1;
    
}
int main(){
    int n ;
    cout<<"Enter the number: ";
    cin>>n;

    if(IsEven(n)){
        cout<< "The Number "<< n <<" Is Even";
    }
    else{
        cout<<"The number "<< n <<" Is Odd";
    }
}