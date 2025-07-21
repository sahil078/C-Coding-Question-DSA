// Take input of Age of 3 people by user and determine older and younger among thme

#include<iostream>
using namespace std;

int main(){
    int age1,age2 ,age3 ;
    cout<<"Enter the age of 1st Person :";
    cin>>age1;
    cout<<"Enter the age of 2nd Person : ";
    cin>>age2;
    cout<<"ENter the age of 3rd Person : ";
    cin>>age3;

    if(age1>age2 && age1>age3){
        cout<<age1 <<" is Older"<<endl;
    }
    else{
        cout<<age1 <<" is Younger"<<endl;
    }

    if(age2>age3 && age2>age1){
        cout<<age2 <<" is Older"<<endl;
    }
    else{
        cout<<age2 <<" is Younger"<<endl;
    }
    
    if(age3>age1 && age3>age2 ){
        cout<<age3 <<" is Older" <<endl;
    }
    else{
        cout<<age3 <<" is Younger"<<endl;
    }
    return 0;
}