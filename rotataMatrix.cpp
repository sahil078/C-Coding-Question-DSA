// Problem Statement: Given a matrix, your task is to rotate the matrix 90 degrees clockwise.

// Brute Force Approach

// Approach: Take another dummy matrix of n*n, and then take the first row of the matrix and put it in the last column of the dummy matrix, take the second row of the matrix, and put it in the second last column of the matrix and so.

// #include<bits/stdc++.h>
// using namespace std;

// // function to rotate the array 90 degrees clockwise
// vector<vector<int>> rotate(vector<vector<int>> &matrix) {
//     int n = matrix.size();

//     // Declare a dummmy matrix
//     vector<vector<int>> rotated(n, vector<int> (n, 0));

//     // iterate the matrix
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             rotated[j][n-i-1] = matrix[i][j];
//         }
//     }

//     return rotated;
// }

// int main() {

//     vector<vector<int>> arr;
//     arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     vector<vector<int>> rotated = rotate(arr);

//     cout<<"Rotated matrix is : \n";

//     for(int i=0; i < rotated.size(); i++) {
//         for(int j=0; j < rotated[0].size(); j++) {
//             cout<<rotated[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// Optimal Aproach 

// Intuition: By observation, we see that the first column of the original matrix is the reverse of the first row of the rotated matrix, so that’s why we transpose the matrix and then reverse each row, and since we are making changes in the matrix itself space complexity gets reduced to O(1). 


#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix) {
    int n = matrix.size();

    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

    for(int i=0; i<n; i++) {
        reverse(matrix[i].begin() , matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix;
    matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotateMatrix(matrix);

    for(int i=0; i<matrix.size(); i++) {
        for(int j=0; j<matrix[0].size(); j++) { 
            cout<< matrix[i][j]<<" ";
        }
        cout<< endl;
    }
}
