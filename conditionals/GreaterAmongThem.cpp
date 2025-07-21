// write a program to take two number as input and print the greater among them 

#include<iostream>
using namespace std;

int main(){
    int a , b ;

    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    if(a>b){
        cout<< a <<" Is Greater than " <<b <<endl;
    }
    else{
        cout<< b <<" Is Greater than " << a <<endl;
    }

    return 0;
}