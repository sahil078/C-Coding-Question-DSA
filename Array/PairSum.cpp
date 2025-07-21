// Pair Sum Return a pair in sorted array with target Sum

// Brute force Approach

// #include<iostream>
// #include<vector>
// using namespace std;

// // function for pair sum calculation
// vector<int> pairSum(vector<int> nums,  int target){
//     vector<int> ans;
//     int n = nums.size();
//     for(int i=0; i<n; i++){

//         for(int j=i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {2 , 7, 9, 11};

//     int target = 20;

//     vector<int> ans = pairSum(nums , target);

//     cout<< ans[0] << " " << ans[1] << " " << endl;

//     return 0;
// }


// Optimized Approach 2 Pointer Approach if all numbers are sorted
#include<iostream>
#include<vector>

using namespace std;

// PairSum function
vector<int> pairSum(vector<int> nums , int target){
    int n = nums.size();
    vector<int> ans;

    int i = 0;
    int j = n-1;

    while(i < j){
        int pairSum = nums[i] + nums[j];

        if(pairSum < target){
            i++;
        }
        else if(pairSum > target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }


}

int main(){
    vector<int> nums = {2,4,5,6,7,8};
    int target = 9;

    vector<int> ans = pairSum(nums , target);

    cout<<ans[0] << " " << ans[1] << " " << endl;
    return 0; 
}