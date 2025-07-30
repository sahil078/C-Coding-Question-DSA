// write the program to find the maximum row sum in a 2D array

#include<iostream>
using namespace std;

int maxRowSum(int mat[][3], int row , int col ) {
    int maxRowSum = INT_MIN;

    for(int i=0; i<row; i++) {
        int currRowSum = 0;
        for(int j=0; j<col; j++) {
            currRowSum += mat[i][j];
        }
        maxRowSum = max(maxRowSum, currRowSum);
    }
    return maxRowSum; 
}

int main(){
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };  // 7,8,9 will give max row sum 24

    int row = 3, col = 3;
    int result = maxRowSum(arr, row, col);
    
    cout << "Maximum row sum in the 2D array is: " << result << endl;

    return 0;
}