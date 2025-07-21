// write a program to check if one given temprature is less than 0 and the other is greater than 100

#include<iostream>
using namespace std;

bool CheckTemp(int temp1 , int temp2){
    if((temp1 < 0 && temp2 > 100) || (temp2 < 0 && temp1 > 100)){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    cout << CheckTemp(120 , -1) << endl;
    cout << CheckTemp(-1, 150) << endl;
    cout << CheckTemp( 2, 120) << endl;


    return 0;
}