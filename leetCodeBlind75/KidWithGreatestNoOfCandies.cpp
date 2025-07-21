/*
-You are given an array Candies[], where each element represents the number of candies a children has.
-You are also given an integer ExtraCandies[], which is number of candies you can given to any children.
-your goal is to dertermine for each children whether giving them extra Candies make them have the greatest or equal to greatest number of candies compare to alll the kids.
*/


#include<iostream>
#include<vector>

using namespace std;

// vector<bool> kidWithExtraCandies(vector<int>&candies , int extraCandies ) {
//     int n = candies.size();

//     vector<bool> result(n, false);

//     for(int i=0; i<n; i++ ) {
//         int newCandies = candies[i] + extraCandies;
//         bool isGreatest = true;

//         for(int j=0; j<n; j++ ) {
//             if(newCandies < candies[j]) {
//                 isGreatest = false;
//                 break;
//             }
//         }
//         result[i] = isGreatest;
//     }

//     return result;
// }

// Optimized Solution

vector<bool> KidWithExtraCandies(vector<int>& candies , int extraCandies) {
    int maxCandy = *max_element(candies.begin() , candies.end());
    vector<bool> result;

    for(int candy : candies) {
        result.push_back(candy + extraCandies >= maxCandy);
    }

    return result;
}

int main () {
    vector<int> candies = {2,3,1,5,3};
    int extraCandies = 3;

    vector<bool> result = KidWithExtraCandies(candies , extraCandies);

    for(bool res : result) {
        cout<< (res ? "true" : "false") << " ";
    }

    return 0;
}


