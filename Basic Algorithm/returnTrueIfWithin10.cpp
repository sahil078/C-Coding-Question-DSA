// write a program to check the given integer and return true if it is within 10 of 100 or 200

#include<iostream>
using namespace std;

bool check(int x){
    if(abs(x-100)<=10 || abs(x-200)<=10 ){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout<< check(103) <<endl;
    cout<<check(90)<<endl;
    cout<<check(89)<<endl;

    return 0;
}