// write a program to take values of length and breadth of a rectrangle from the user and check if it is square or not.

#include<iostream>
using namespace std;

int main(){
    int length , breadth;

    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the Breadth : ";
    cin>>breadth;

    if(length == breadth){
        cout<<"It is a Square"<<endl;
    }
    else{
        cout<< "It is a Rectrangle";
    }
    return 0;
}