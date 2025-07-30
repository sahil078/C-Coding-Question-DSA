#include<iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1, 2, 3},  {4, 5, 6},  {7, 8, 9} };

    // take input from useer
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         cin>> arr[i][j];
    //     }
    // }

    cout<<"size of 2D array " <<sizeof(arr) <<endl;   //total 9 elements, each of size 4 bytes (int) 9*4 = 36 bytes

    cout << "2D Array elements are:" << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<< arr[i][j] <<" ";
        }
        cout<< endl;
     }

     return 0;
}