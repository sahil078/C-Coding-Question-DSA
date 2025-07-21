// write a program to find the grestest common devisor of given two string;

#include<iostream>
#include <numeric> // for std::gcd
using namespace std;

// // Brute force Approach

// // function to check if 's' can be formed by repeating 'x'
// bool isDivisible(string s , string x) {
//     int n = s.size();
//     int m = x.size();

//     if(n % m != 0) return false;

//     string repeated = "";
//     for(int i=0; i<n/m; i++) {
//         repeated += x;
//     }

//     return repeated == s;
// }

// // function to find the largest common devisor
// string gcdOfString(string str1 , string str2) {
//     int minLen = min(str1.size() , str2.size());

//     // Try all prefixes of minLen n decreasing order
//     for(int len = minLen; len > 0; len--) {
//         string prefix = str1.substr(0 , len);

//         if(isDivisible(str1 , prefix) && isDivisible(str2 , prefix)) {
//             return prefix;
//         }
//     }

//     return "";
// }



// Better Approach using gcd build-in function

string gcdOfString(string str1 , string str2) {
    // if concatination in different orders doesn't match  there is no common devisor
    if(str1 + str2 != str2 + str1) {
        return "";
    }

    // compute gcd of both length of string 1 and string 2 
    int gcdLen = gcd(str1.size()  , str2.size());

    // The largest common divisor of the subtring
    return str1.substr(0 , gcdLen);
}


int main () {
    cout << gcdOfString("ABCABC", "ABC") << endl;  // Output: "ABC"
    cout << gcdOfString("ABABAB", "ABAB") << endl;  // Output: "AB"
    cout << gcdOfString("LEET", "CODE") << endl;  // Output: ""

    return 0;
}