// Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.


// Brute Force Solution

// #include <bits/stdc++.h>
// using namespace std;

// Function for linearSearch

// bool linearSearch(vector<int>& a , int num) {
//     int n = a.size();

//     for(int i = 0; i < n; i++) {
//         if(a[i] == num){
//             return true;
//         }
//     }
//     return false;
// }


// function to  find the length of the longest sequence

// int longestSequence (vector<int> &a) {
//     int n = a.size();   // size of array 
//     int longest = 1;

//     // Pick a element and search for it's consequetive number

//     for(int i=0; i<n; i++) { 
//         int x = a[i];
//         int cnt = 1;

//         // search for consecutive number

//         while(linearSearch(a , x + 1) == true) {
//             x += 1;
//             cnt += 1;
//         }

//         longest = max(longest, cnt);
//     }

//     return longest;
// }

// int main() {
//     vector<int>  a = {100, 200, 1, 2, 3, 4};

//     int ans = longestSequence(a);

//     cout<<"The longest sequence is " << ans << endl;

//     return 0;
// }


// Better Approach  By using sort 

// #include <bits/stdc++.h>
// using namespace std;

// function to fiind longestSequence

// int longestSequence(vector<int> &a) {
//     int n = a.size();
//     if(n==0) return 0;

//     // sort the array
//     sort(a.begin(), a.end());

//     int lastSmall = INT16_MIN;
//     int cnt = 0;
//     int longest  = 1;

//     // find the longest
//     for(int i=0; i<n; i++) {
//         if(a[i] - 1 == lastSmall) {
//             cnt += 1;   
//             lastSmall = a[i];
//         }
//         else if (a[i] != lastSmall) { 
//             cnt = 1;
//             lastSmall = a[i];
//         }
//         longest = max(longest, cnt);
//     }

//     return longest;
// }


// int main() {
//     vector<int> a = {100, 200, 1, 2, 3, 4};

//     int ans = longestSequence(a);

//     cout<<"the longest sequence "<<ans <<endl;

//     return 0;
// }


// Optiml Approach using UnOrdered list


#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <climits>

using namespace std;

int longestSequence(vector<int> &a) {
    int n = a.size();
    if(n==0) return 0;

    int longest = 1;
    unordered_set<int> st;

    // put all the element in the sequence
    for(int i = 0; i < n; i++) {
        st.insert(a[i]);
    }

    // find the longest sequence
    for(auto it : st) {
        // if 'it' is starting number
        if(st.find(it-1) == st.end()) {
            int cnt = 1;
            int x = it;

            while(st.find(x+1) != st.end()) {
                x = x+1;
                cnt = cnt+1;
            }

            longest = max(longest , cnt);
        }
    } 
    return longest;
}

int main() {
    vector<int> a = {100, 200, 1, 2, 3, 4};

    int ans = longestSequence(a);

    cout<<"The longest sequence is "<< ans<<endl;

    return 0;
}