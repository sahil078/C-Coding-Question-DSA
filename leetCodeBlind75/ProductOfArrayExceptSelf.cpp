/*
- You are given an array of integers called 'nums'.
- You need to return a new array called 'answer' such that: answer[i] is equal to product of all the elements in array except nums[i].
*/


#include<iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();

    vector<int> result (n , 1);

    for(int i=0; i<n; i++) {
        int product = 1;

        for(int j=0; j<n; j++) {
            if(i != j) {
                product *= nums[j];
            }
        }
        result[i] = product;
    }

    return result;
}

int main () {

    vector<int> nums  = {2, 4, 5, 7};

    vector<int> result = productExceptSelf(nums);

    for(int nums : result) {
        cout<< nums << " ";
    }

    cout<<endl;

    return 0;
}