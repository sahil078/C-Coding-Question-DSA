/*
Reverse the vowels of string
We are given a string s and need to reverse only the vowels while keeping the other characters in their original positions.
*/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

//  This solution has time complexity of O(n)  But we are storing the vowels in other variable due to this it is using extra space that make the space complexity as O(1)

// string reverseVowel(string s ) {
//     unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//     vector<char> vowelList;

//     for(char c : s) {
//         if(vowels.count(c) ) {
//             vowelList.push_back(c);
//         }
//     }

//     int index = vowelList.size()-1;

//     for(char &c : s) {
//         if(vowels.count(c)) {
//             c = vowelList[index--];
//         }
//     }
//     return s;
// }


// Better Approach that we can use is Two Pointer Approach to reduce the extra space that we are using to store the vowels


// Function to check the charecter is vowel or not
bool isVowel(char &ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) {
        return true;
    }
    else{
        return false;
    }
}

string reverseVowel(string s) {
    int n = s.size();

    int start = 0;
    int end = n-1; 

    while(start <= end) { 
        if(!isVowel(s[start])) {   // move forward if the start is not the vowel
            start++;
        }
        else if(!isVowel(s[end])) {   // move backward if the end is not vowel
            end--;
        }
        else {
            swap(s[start] , s[end]);    // swap the start and end charecter
            start++;
            end--;
        }
    }

    return s;
}

int main () {
    string s = "IceCreAm";

    cout<<"THe reversed vowel of the string s is : " << reverseVowel(s) << endl;

    return 0;
}