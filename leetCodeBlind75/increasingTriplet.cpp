// We are given an array nums, and we need to check if there exists any triplet (i, j, k) such that:

// i < j < k and

// nums[i] < nums[j] < nums[k]

// This means we need to find three numbers in increasing order and also in increasing index order.


// Brute Force Approach

#include<iostream>
#include<vector>

using namespace std;

// bool increasingTriplet(vector<int> & nums) {
//     int n = nums.size();

//     for(int i=0; i<n-2; ++i ) {
//         for(int j=i+1; j<n-1; ++j) {
//             for(int k=j+1; j<n; ++j) {
//                 if(nums[i] < nums[j] && nums[j] < nums[k] ) {
//                     return true;
//                 }
//             }
//         }
//     }

//     return false;
// }


// Optimized Solution

bool increasingTriplet(vector<int> & nums) {
    int first = INT16_MAX;
    int second = INT16_MAX;

    for(int num : nums) {
        if(num <= first) {
           first = num;
        }
        else if(num <= second) {
            second = num;
        }
        else{
            return true;
        }
    }
    return false;

}

int main() {
    vector<int> nums = {2,3,4,5,8,9};

    vector<int> number = {1,5,2,6,1};

    if(increasingTriplet(number)) {
        cout<<"true"<<" ";
    }else{
        cout<<"false"<<" ";
    }

    return 0;
}


