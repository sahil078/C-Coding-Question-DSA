// how to create a 2D array in C++ using vector
#include <iostream>
#include <vector>
using namespace std;


int main() {
    // Declare 2D vector
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = arr.size(), cols = arr[0].size();


    // cout << "Enter number of rows: ";
    // cin >> rows;
    // cout << "Enter number of columns: ";
    // cin >> cols;    
    // arr.resize(rows, vector<int>(cols)); // Resize the 2D vector
    // cout << "Enter elements of the 2D array:" << endl;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin >> arr[i][j]; // Input elements     
    //     }
    // }


    cout << "2D Array elements are:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " "; // Print elements
        }
        
        cout << endl; // New line after each row
    }
    // Display size and total elements
    cout << "Size of 2D vector: " << sizeof(arr) << " bytes" << endl; // Size of the 2D vector
    cout << "Total elements in 2D vector: " << rows * cols << endl; // Total number of elements
    cout << "Size of each element: " << sizeof(arr[0][0]) << " bytes" << endl; // Size of each element
    cout << "Total size of 2D vector: " << rows * cols * sizeof(arr[0][0]) << " bytes" << endl; // Total size of the 2D vector
    return 0;   
}