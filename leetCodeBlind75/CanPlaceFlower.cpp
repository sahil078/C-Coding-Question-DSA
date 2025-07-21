/*
Write a program to place n number of flower in flowerbed. 
You have a long flowerbed represented as an array where:
1 means a plot is already planted with a flower.
0 means a plot is empty.

You need to check if n new flowers can be planted while following these constraints:
No two flowers can be adjacent (i.e., there cannot be two 1s next to each other).
You can only plant in 0 spots if doing so does not violate rule #1.
*/

#include<iostream>
#include<vector>

using namespace std;

// bool canPlaceFlower(vector<int>& flowerbed , int n) {
//     int size = flowerbed.size();

//     for(int i=0; i<size; i++) {
//         if(flowerbed[i] == 0) {
//             bool emptyLeft = (n==0) || (flowerbed[i-1] == 0);
//             bool emptyRight = (n == size-1) || (flowerbed[i+1] == 0);

//             if(emptyLeft && emptyRight ) {
//                 flowerbed[i] = 1;
//                 n--;
//                 if(n == 0) return true;
//             }
//         }
//     }

//     return n <= 0;
// }



// better Approach (instead of modifying the flowerbed , count how many valid spot exists)

bool canPlaceFlower(vector<int>& flowerbed , int n) {
    int size = flowerbed.size();
    int count = 0;

    for(int i=0; i<size; i++) {
        if(flowerbed[i] == 0) {
            bool emptyLeft = (n==0) || (flowerbed[i-1] == 0);
            bool emptyRight = (n == size-1) || (flowerbed[i+1] == 0);

            if(emptyLeft && emptyRight ) {
                flowerbed[i] = 1;
                count++;
                if(count >= n) return true;
            }
        }
    }
    return count >= n;
}

int main() {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    cout<< (canPlaceFlower(flowerbed , n) ? "true" : "false") << endl;

    return 0;
}
