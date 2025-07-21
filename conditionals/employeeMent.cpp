// write s program to Ask user to enter age , sex(M or F) , Merital Status (y or n ) and than using following rules print their place of service

// if emplyee is female , than she will work only in urban areas
// if employee is male and age between 20 to 40 thn he may work anywhere
// if employee is male and age between 40 to 60 thn he will work in urban areas only.
// And any other input of age should be print error


#include<iostream>
using namespace std;

int main(){
    char gender , marital_status;
    int age;
    char M,F,Y,N;  //m-male, f=female, y=yes , n = no

    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your Gender(M/F): ";
    cin>>gender;
    cout<<"enter your marital-status(Y/N)";
    cin>>marital_status;

    if(gender == 'F'){
        cout<<"You will only work in Urban areas";
    }
    else if(gender == 'M' && (age>=20 && age <= 40)){
        cout<<"\n You can work wherever you want.";
    }
    else if(gender == 'M' && (age>=40 && age <= 60)){
        cout << "\n You have to work in Urban area." ;
    }
    else{
        cout <<"Invalid Input!";
    }
    return 0;

}