// Enter the no.. to find the week Day

#include<iostream>
using namespace std;

int main(){
    int weekDays;
    cout<<"Enter a number between 1 and 7: ";
    cin>>weekDays;

    switch(weekDays){
        case 1:
            cout<<"First Day of week is Monday "<<endl;
            break;
        case 2:
            cout<<"Sencond Day of week is Tuesday "<<endl;
            break;
        case 3:
            cout<<"Third Day of Week is Wednesday"<<endl;
            break;
        case 4:
            cout<<"Fourth Day of Week is Thrusday"<<endl;
            break;
        case 5:
            cout<<"Fifth Day of Week is Friday"<<endl;
            break;
        case 6:
            cout<<"Sixth Day of Week is Saturday"<<endl;
            break;
        case 7:
            cout<<"Seventh Day of Week is Sunday"<<endl;
            break;
    }
}