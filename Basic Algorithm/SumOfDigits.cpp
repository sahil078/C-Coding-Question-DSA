// write a progrsm to calculate the sum of digits of a number
#include<iostream>

using namespace std;

int digitSum(int n ) {
    int sum = 0; 
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n= n/10;
    }

    return sum;
}
int main() {
    int n = 5678;
    int sum = digitSum(n);
    cout << "The sum of digits of " << n << " is: " << sum << endl;
    return 0;
}