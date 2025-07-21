/*
Reverse the string of the word. The words are separeted by one or more spaces. and the input string may contain leading or triling spaces.
1. remove all the extra spaces.
2. Reverse the order of words.
3. Ensure that the words in the output are separeted by single space.
*/

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string reverseString(string s ) {
    vector<string> words;

    stringstream ss (s);

    string word , result = "";

    while(ss >> word) {
        words.push_back(word);
    }

    for(int i = words.size() -1; i >= 0; i--) {
        result += words[i];
        if(i != 0) result += " ";
    }

    return result;
}


int main() {
    string s = "  hello   world      sdgdhdcsdvds     ";
    cout << "\"" << reverseString(s) << "\"" << endl; // Output: "world hello"
    return 0;
}
