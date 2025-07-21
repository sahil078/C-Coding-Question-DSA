#include<iostream>
using namespace std;

// in funtion we are passing the value a=4, b = 6
int funn(int a , int b) {
    // now in a tring to assing a right shift (a-2) so first braces will execute and it will give us 4-2 i.e 2 and to calculate the right shift we can do a*2pow(value)that we got by calculating a-2 i.e 2 so it will be 4*2pow(2) 4*4 16 so a = 16
    a = a<<(a-2);

    // here  the same b=6 than b-5 i.e 6-5 = 1 but here we are donig right shift so it devide the value that's why  6/2pow(1) 6/2 = 3 s0 b = 3
    b=b>>(b-5);

    // now in this statement a=1 i.e 16+1 = 17 so , a=17
    a = a+1;

    // in this statement b = 3 so, 3+1 = 4
    b = b+1;

    // now in this statement a+b i.e 17+4 = 21
    return a+b;  // return 21
}

int main() {
    int a = 4;
    int b = 6;

    int result = funn(a , b );

    cout<<result<<endl;
}