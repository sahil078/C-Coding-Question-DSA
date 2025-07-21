// Find the majority element in an array of elements that has the highest frequency value

// BrootForce Approach
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

// int majorityElem(vector<int> nums)
// {
//     int n = nums.size();

//     for (int val : nums)
//     {
//         int freq = 0;

//         for (int el : nums)
//         {
//             if (el == val)
//             {
//                 freq++;
//             }
//         }
//         if (freq > n / 2)
//         {
//             return val;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> nums = {2, 3, 2, 3, 3, 3, 2};

//     int ans = majorityElem(nums);
//     cout<<ans;
//     return 0;
// }


// Optimize the Code 1. sort the array  and than check the frequency of the element

// int majorityElem(vector<int> nums){
//     int n = nums.size();
//     int freq = 1 , ans = nums[0];

//     for(int i=1; i<n; i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }
//         else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > n/2){
//             return ans;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {1,2,1,2,1,3,3,3,3};
//     int n = nums.size();

//     // sort
//     sort(nums.begin(), nums.end());

//     int ans  = majorityElem(nums);
//     cout<<ans<<endl;
// }



// Moore's Voting Algorithm

int majorityElem(vector<int> nums){
    int n  = nums.size();
    int freq = 0 , ans =  0 ;

    for(int i = 0; i < nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }

        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,1,3,3,2,3,3,2};
    
    int ans = majorityElem(nums);

    cout<<ans;

}