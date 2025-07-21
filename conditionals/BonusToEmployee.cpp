// A company decided to give bonus of 5% to employee if his/her year of services is more than 5 years. Ask user for their salary and year of services and print the net bonus amount

#include<iostream>
using namespace std;

int main(){
    int salary , yos ;
    float bonus;
    cout<<"Enter your Salary: ";
    cin>>salary;
    cout<<"Enter your year of services: ";
    cin>>yos;

    bonus = salary + (salary*0.05);

    if(yos>=5){
        cout<<"COngratulation ! you are eligible for Bonus"<<endl;
        cout<<"Your total salary with bonus is :"<<bonus<<endl;
    }
    else{
        cout<<"Sorry! You are not eligible to get the bonus"<<endl;
        cout<<"Your salary is : "<<salary<<endl;
    }
    return 0;
}