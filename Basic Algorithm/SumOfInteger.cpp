// write a C++ Program to Compute the sum of two given Integer values. if the two values are same , then return the triple their sum

#include<iostream>
using namespace std;

 int test(int x, int y){
    if(x==y){
        return (x+y)*3;
    }
    else{
        return x+y;
    }
}
int main(){
    cout << test( 4, 5) <<endl;
    cout<< test(3 , 3)<< endl;
    cout<<test(4 , 7) <<endl;
    return 0;
}