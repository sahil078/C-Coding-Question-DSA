// write a program to check if sum of all 5 in the array is exactly 15

#include <iostream>
using namespace std;

static bool test(int nums[], int arr_length)
        {
            int sum = 0;

            for (int i = 0; i < arr_length; i++)
            {
                if (nums[i] == 5)
                    sum += 5;
            }

            return sum == 15;
        }   


int main() 
{  
    int nums1[] = {1, 5, 6, 9, 10, 17};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl; 
    int nums2[] = {1, 5, 5, 5, 10, 17};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = { 1, 1, 5, 5, 5, 5 };
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    return 0;    
}