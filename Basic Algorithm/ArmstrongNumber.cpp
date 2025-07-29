// write a program to execute the Armstrong number algorithm 
// Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include<iostream>

using namespace std;

bool isArmString(int n ) {
    int copyN = n;
    int sumOfCube = 0;

    while( n != 0) {
        int digit = n%10;
        sumOfCube += (digit * digit * digit);
        n = n / 10;
    }
    return sumOfCube == copyN;
}


int main() {
    int n = 153; 
    if (isArmString(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}