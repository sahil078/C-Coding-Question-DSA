// write a prgram to perform linear search on a 2D array and search the key is present or not

#include <iostream>
using namespace std;

bool linearSearch(int mat[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == key)
            {
                cout << "Key found at position: (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    cout << "Key not found in the 2D array." << endl;
    return false;
}

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int key = 9;

    int row = 2, col = 3;
    linearSearch(arr, row, col, key);

    return 0;
}