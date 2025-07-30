// write the program to find the maximum column sum in a 2D array

#include<iostream>
using namespace std;

int maxColSum(int mat[][3] ,int row , int col) {
    int maxColSum = INT_MIN;

    for(int i=0; i<col; i++) {
        int currColSum = 0;
        for(int j=0; j<row; j++) {
            currColSum += mat[j][i];
        }
        maxColSum = max(maxColSum, currColSum);
    }
    return maxColSum;
}

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // 3,6,9 will give max column sum 18

    int row = 3, col = 3;
    int result = maxColSum(arr, row, col);
    
    cout << "Maximum column sum in the 2D array is: " << result << endl;

    return 0;
}