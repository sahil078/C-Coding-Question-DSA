#include<iostream>
using namespace std;

int main() {
    int a,b,c;

    a=7, b=8, c=7;

    for(c=2; c<=4; c++) {
        b = 11+a;
    }

    // inside the upper loop we are just updating the value of b but it will be always  updated by this for loop
    for(c=3; c<=4; c++) {

        // 
        b = (b&10)+a;

        // here we need to calcuate just this value becoz the upper statement value will always replaced by this value
        b = (c+11)+c;
    }

    cout<<a+b<<endl;

    return 0;
}