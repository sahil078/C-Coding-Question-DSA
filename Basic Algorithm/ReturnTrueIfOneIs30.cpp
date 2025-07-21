// write a c++ Program to to check the given intergers, and reuten true if one of then is 30 or if their sum is 30

#include<iostream>
using namespace std;

bool check(int x , int y){
    if(x==30 || y==30 || (x+y==30)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout<<check(30 , 0)<<endl;
    cout<<check(25 , 5)<<endl;
    cout<<check(20 , 30)<<endl;
    cout<<check(20 , 25)<<endl;

    return 0;
}