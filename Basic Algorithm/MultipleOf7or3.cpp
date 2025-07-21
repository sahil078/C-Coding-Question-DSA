// write a program to check if a given number is multiple f 3 or multiple of 7

#include<iostream>
using namespace std;

bool checkMulti(int x){
    if((x%3 == 0) || (x%7 == 0)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout<< checkMulti(3)<<endl;
    cout<< checkMulti(14)<<endl;
    cout<< checkMulti(12)<<endl;
    cout<< checkMulti(37)<<endl;

    return 0;
}