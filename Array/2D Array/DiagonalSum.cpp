// write the program to find the daigonal sum of a 2D array

#include<iostream>
using namespace std;

int findDiagonalSum(int mat[][4] , int row, int col) {
    int sum = 0;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(i == j) { // checking for primary diagonal
                sum += mat[i][j];
            }
            else if(j == row - i - 1) { // checking for secondary diagonal
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

// Optimized version
int DiagonalSumOptimized(int mat[][4] , int row , int col) {
    int sum = 0;

    for(int i=0; i<row; i++) {
        sum += mat[i][i]; // primary diagonal
        if(i != row - i - 1) { // avoid double counting the center element in odd dimension matrices
            sum += mat[i][row - i - 1]; // secondary diagonal
        }
    }
    return sum;
}


int main() {
    int arr[4][4] = { {1, 2, 3 ,4}, { 5, 6, 7, 8}, { 9, 10 ,11, 12}, { 13, 14, 15, 16} }; // Diagonal elements are 1,6,11,16 and 4,7,10,13
    int row = 4, col = 4;
    int result = findDiagonalSum(arr, row, col);
    int result2 = DiagonalSumOptimized(arr, row, col);
    
    cout << "Diagonal sum of the 2D array is: " << result << endl;
    cout << "Optimized diagonal sum of the 2D array is: " << result2 << endl;

    return 0;
}