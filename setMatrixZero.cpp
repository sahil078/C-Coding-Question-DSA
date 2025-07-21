// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.


// // Brute Force Approach
// #include <bits/stdc++.h>
// using namespace std;


// // function to mark Row
// void markROw(vector<vector<int>> &matrix, int n, int m, int i) {

//     // set all non-zero value as -2 in the row i 

//     for(int j=0; j<m; j++) {
//         if(matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// } 

// // function to mark col

// void markCol(vector<vector<int>> &matrix, int n, int m , int j ) {

//     // set all non-zero value as -1 in the col
//     for(int i=0; i<n; i++) {
//         if(matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }

// // function for zero Matrix
// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix , int n , int m ) {
//     // set -1 for rows and col so that we can have all the rows and col of the matrix and we can convert it to zero 

//     // Don't mark any 0 as -1

//     // loop to traverse the rows 
//     for(int i=0; i<n; i++) {
//         // loop to traverse the columns and find 0 so that we can conver the row and col of perticular zero as -1
//         for (int j=0; j<m; j++) {
//             if(matrix[i][j] == 0) {
//                 // call the markRow and markCol functions
//                 markROw(matrix , n, m , i);
//                 markCol(matrix, n , m , j);
//             }
//         }
//     }

//     // finally , mark all -1 as 0

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {

//             if(matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main() {
//     vector<vector<int>> matrix = {{1,1,1}, {1,0,1}, {1,1,1}};

//     int n = matrix.size();
//     int m = matrix[0].size();

//     // call the function zeroMatrix
//     vector<vector<int>> ans = zeroMatrix(matrix , n, m);

//     cout<<"The final Matrix is : \n";

//     for(auto it : ans ) {
//         for(auto ele : it) {
//             cout<<ele<<" ";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }



// Better Approach by storing the 1st row and 1st col in another variable

// #include<bits/stdc++.h>
// using namespace std;

// // function for zeroMatrix
// vector<vector <int>> zeroMatrix(vector<vector<int>> &matrix , int n , int m)
// {
//     int row[n] = {0}; //taking the row array and initialize with zero values

//     int col[m] = {0}; //taking the column array and initialize with zero values

//     // Traverse the matrix
//     for(int i=0; i<n; i++) {

//         for(int j=0; j<m; j++) {
//             if(matrix[i][j] == 0) {
//                 // mark ith index of row with 1:
//                 row[i] = 1;

//                 // mark jth index of column with 1:
//                 col[j] = 1;
//             }
//         }
//     }


//     // finally mark all (i,j) as 0 
//     // if row[i] or col[j] is marked with 1

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             if(row[i] || col[j]){
//                 matrix[i][j] = 0;
//             }
//         }
//     }


//     return matrix;
// }

// int main() {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

//     int n = matrix.size();
//     int m = matrix[0].size();

//     vector<vector<int>> ans = zeroMatrix(matrix,n,m);

//     cout<<"The Final Matrix is : \n";
//     for(auto it : ans) {

//         for(auto  ele : it) {
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }



// OPtimal Approach without using extra space to store row and col


#include<bits/stdc++.h>
using namespace std;

