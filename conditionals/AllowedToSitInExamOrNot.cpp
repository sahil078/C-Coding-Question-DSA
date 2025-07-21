/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from useer
NUmber of classes held
Number of classes attended
and print percentage of class attended
is student allowed to sit in exam or not 
*/

#include<iostream>
using namespace std;

int main(){
    float nOCH , nOCA;
    float percentage;
    cout<<"Enter the Number  of Classes Held: "<<endl;
    cin>>nOCH;
    cout<<"ENter the number of classes Attend: "<<endl;
    cin>>nOCA;

    percentage = ((nOCA/nOCH)*100);
    
    if(percentage >= 75){
        cout<<"Your TOtal Percentage of class Attend is : "<<percentage<<endl;
        cout<<"You are Allowed To Sit In Exam"<<endl;
    }
    else{
        cout<<"Your TOtal Percentage of class Attend is : "<<percentage<<endl;
        cout<<"You are not Allowed to Sit in Exam"<<endl;
    }
    return 0;
}