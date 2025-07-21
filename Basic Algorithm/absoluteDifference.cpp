// write a C++ Program to calculate the absolute difference between n and 51 , if n is greater than 51 return triple the absolute value

#include<iostream>
using namespace std;

int differ(int n){
    const int x = 51;
    if(n > 51){
        return (n-x)*3;
    }
    else{
        return x-n;
    }
}

int main(){
    cout<<differ(53)<<endl;
    cout<<differ(30)<<endl;
    cout<<differ(51)<<endl;

    return 0;
}