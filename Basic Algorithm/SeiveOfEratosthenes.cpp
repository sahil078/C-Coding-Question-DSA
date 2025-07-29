// Seive of Eratosthenes is an efficient algorithm to find all prime numbers up to a specified integer.
// This implementation uses a vector to mark non-prime numbers.

#include<iostream>
#include<vector>

using namespace std;

int countPrimes(int n) {
    if (n < 2) return 0;

    vector<bool> isPrime(n+1 , true);
    int count = 0;
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

    for(int i=2; i<n; i++) {
        if(isPrime[i]) {
            count++;
            for(int j=i*2; j<n; j = j+i) {
                isPrime[j] = false; // Marking multiples of i as non-prime
            }

        }
    }

    return count;
}

int main() {
    int n = 50;

    int primeCount = countPrimes(n);
    cout << "Number of prime numbers less than " << n << " is: " << primeCount << endl;

    return 0;
}