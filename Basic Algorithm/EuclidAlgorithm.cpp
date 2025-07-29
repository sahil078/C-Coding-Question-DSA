// write a program to find GCD of two numbers using Euclid's algorithm

#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if( a > b) {
            a = a%b;
        }else{
            b = b%a;
        }
    }

    if(a == 0) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int a = 20, b = 28;
    int result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << result << endl;
    return 0;
}