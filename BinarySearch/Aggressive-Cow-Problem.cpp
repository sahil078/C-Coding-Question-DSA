#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Function to check if it is possible to place cows with a minimum distance
bool isPossible(vector<int> &arr, int n, int c , int maxAllowedDist) {
    int lastCow = arr[0]; // Place the first cow at the first stall
    int count = 1; // Count of cows placed
    for(int i=1; i<n; i++) {
        // If the current stall is at least maxAllowedDist away from the last placed cow
        if((arr[i] - lastCow) >= maxAllowedDist) {
            count++; // Place a cow here
            lastCow = arr[i]; // Update the last placed cow's position
        }
        if(count == c) return true; // If all cows are placed successfully
    }

    return false; // Not all cows could be placed with the given distance
}


// Function to find the maximum distance between cows
int findMaxDistance(vector<int> &arr, int n, int c) {
    sort(arr.begin(), arr.end()); // Sort the array first

    int st=0, end = arr[n-1] - arr[0];
    int ans = -1;

    while(st <= end) {
        int mid = st+ (end-st)/2;

        if(isPossible(arr, n, c , mid)) {
            ans = mid;
            st = mid+1;  //move to right part to find a larger distance
        }else{
            end = mid - 1; //move to left part to find a smaller distance
        }
    }

    return ans;
} 



int main(){
    vector<int> arr = {1,2,8,4,9}; // c is no. of cows
    int c = 3; // Number of cows
    int n = arr.size(); 

    int largestDistance = findMaxDistance(arr, n, c);
    cout << "The largest minimum distance is: " << largestDistance << endl;
    return 0;

}
