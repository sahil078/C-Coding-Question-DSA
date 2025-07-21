/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from useer
NUmber of classes held
Number of classes attended
and print percentage of class attended
is student allowed to sit in exam or not 
allowed to sit in exam by medical
*/

#include<iostream>
using namespace std;

int main(){
    float nOCH , nOCA;
    float percentage;
    char medicalIssue;
    cout<<"Enter the Number  of Classes Held: "<<endl;
    cin>>nOCH;
    cout<<"ENter the number of classes Attend: "<<endl;
    cin>>nOCA;

    percentage = ((nOCA/nOCH)*100);

    cout<<"Your TOtal Percentage of class Attend is : "<<percentage<<endl;

    cout<<"Is there any Medical condition (Y/N) "<<endl;
    cin>>medicalIssue;


    if(percentage >= 75){
        cout<<"You are Allowed To Sit In Exam"<<endl;
    }
    else if (percentage <= 75 && medicalIssue=='Y'){
        cout<<"You Are Allowed To Sit In Exam By Medical Reason";
    }
    else{
        cout<<"You are not Allowed to Sit in Exam"<<endl;
    }
    return 0;
}