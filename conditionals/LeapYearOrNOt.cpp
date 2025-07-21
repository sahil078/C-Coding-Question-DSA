// write a program to check if  a year is leap or not . if a year is divisible by 4 thn it is leap year but if the year is in century 2000 , 2014 , 2015 , thn it must be divisible by 400

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if(year % 4 == 0 and year % 400 == 0){
        cout<<"It is a leap year";
    }
    else{
        cout<<"it's not a leap year";
    }
    return 0;
} 