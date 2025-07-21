// writa a program to check the given charector is in UpperCase Or LowerCase (a to z ) or (A to Z)

#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter the charecter : "<<endl;
    cin>>ch;
    
    if(ch >= 'a' && ch <= 'z'){
        cout<< "The character entered is lowercase"<< endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"The charecter entered is UpperCase"<<endl;
    }
    else{
        cout<<"This is not a charecter! please enter the right charecter";
    }

    return 0;
}