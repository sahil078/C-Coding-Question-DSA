// calculator

#include<iostream>
using namespace std;
int main(){

int a , b;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;

char operat;
cout<<"Enter the operator (+ , - , * , /) : ";
cin>>operat;

switch(operat){
    case '+':
        cout<< (a+b)<<endl;
        break;
    case '-':
        cout<<(a-b)<<endl;
        break;  
    case '*':
        cout<<(a*b)<<endl;
        break;  
    case '/':
        cout<<(a/b)<<endl;
        break;  
    default:
        cout<<"Enter the valid Operator: ";
    }
return 0;

}