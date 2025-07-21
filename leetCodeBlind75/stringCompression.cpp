// you sre given a list of characters like : ["a", "a", "b", "b", "c", "c", "c"]   
/*
you have to compress the list by grouping same consecutive characters, and:
1. if the character appears once , ust keep it as it is
2. f the character appears more than once, then you have to keep the character and the number of times it appears in the list
3. you have to return the length of the compressed list
*/


#include<iostream>
#include<vector>

using namespace std;


// brute force approach using extra space
// Time complexity: O(n)
// Space complexity: O(n)
// int compressChar(vector<char> & chars) {    
//     vector<char> result;
//     int i = 0;

//     while(i < chars.size()) {
//         // count occurence of the character
//         char currentChar = chars[i];
//         int count = 0;
//        while(i < chars.size() && chars[i] == currentChar) {
//         count++;
//         i++;
//        }

//        result.push_back(currentChar);

//        if(count > 1) {
//         string countStr = to_string(count);
//         for(char c : countStr) {
//             result.push_back(c);
//         }
//        }
//     }

    
//     // copy the result back to the original vector
//     for(int j=0; j<result.size(); j++) {
//         chars[j]  = result[j];
//     }

//     return result.size();
// }


// Optimized approach using constant space
// Time complexity: O(n)
// Space complexity: O(1)

int compressChar(vector<char> & chars) {
    int n = chars.size();
    int writeIndex = 0; // index to write compressed characters
    int readIndex = 0; // index to read characters

    while(readIndex < chars.size()) {
        char currentChar = chars[readIndex];
        int count  = 0;
        // count the number of occurrences of the current character
        while(readIndex < n && chars[readIndex] == currentChar) {
            count++;
            readIndex++;
        }
        
        // write the current character
        chars[writeIndex++] = currentChar;

        // if count is greater than 1, write the count as well
        if(count > 1) {
            string countStr = to_string(count);
            for(char c : countStr) {
                chars[writeIndex++] = c;
            }
        }
    }

    // return the length of the compressed list
    return writeIndex;

    // the compressed characters are now in the first writeIndex positions of chars
    // the rest of the characters in chars are not part of the compressed list
    // you can ignore them
    // if you want to see the compressed characters, you can print them from chars[0] to chars[writeIndex - 1]
    // for(int i=0; i<writeIndex; i++) {
    //     cout << chars[i] << " ";
}

int main () {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int compressedLength = compressChar(chars);

    cout << "Compressed length: " << compressedLength << endl;

    cout << "Compressed characters: ";

    for(int i=0; i<compressedLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
    return 0;
}