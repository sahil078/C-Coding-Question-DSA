// Enter the month number to find the month

#include<iostream>
using namespace std;

int main(){
    int MonthDay;
    cout<<"Enter the number of MonthDay (1 to 12): ";
    cin>>MonthDay;

    switch(MonthDay){
        case 1:
            cout<<"first Day of Month is January"<<endl;
            break;
        case 2:
            cout<<"Sencond Day of Month is Februry "<<endl;
            break;
        case 3:
            cout<<"Third Day of Month is March"<<endl;
            break;
        case 4:
            cout<<"Fourth Day of Month is April"<<endl;
            break;
        case 5:
            cout<<"Fifth Day of Month is May"<<endl;
            break;
        case 6:
            cout<<"Sixth Day of Month is June"<<endl;
            break;
        case 7:
            cout<<"Seventh Day of Month is july"<<endl;
            break;
        case 8:
            cout<<"Eighth Day of Month is August"<<endl;
            break;
        case 9:
            cout<<"Ninth Day of Month is September"<<endl;
            break;
        case 10:
            cout<<"Tenth Day of Month is October"<<endl;
            break;
        case 11:
            cout<<"Eleventh Day of Month is November"<<endl;
            break;
        case 12:
            cout<<"Twelveth Day of Month is December"<<endl;
            break;
    }
}