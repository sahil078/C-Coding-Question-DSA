// write a program to merge two string alternatively.
// word1 = abc;
//  word2 = pqrs;

//  Output: apbqcrs;
//  Note: if after merging the entire string if any string size left it will be added at the end

#include <iostream>
using namespace std;

string mergeAlternately(string word1, string word2)
{

    // string merged = "";
    // int i = 0, j = 0; // declare two pointer for word1 and word2

    // // store the length of both word1 and word2 in variable
    // int len1 = word1.length(), len2 = word2.length();

    // // function to merge alternately
    // while (i < len1 && j < len2)
    // {
    //     merged += word1[i++]; // Append charecter from word1 and move the pointer
    //     merged += word2[j++]; // Append charecter from word2 and move the pointer
    // }

    // // Append remaining charecters from word1 if any
    // while (i < len1)
    // {
    //     merged += word1[i++];
    // }

    // // Apppend the remaining charecters from word2 if any
    // while (j < len2)
    // {
    //     merged += word2[j++];
    // }

    // return merged;


    string result = "";

    for(int i=0; i<word1.length() || i<word2.length(); i++) {
        if(i < word1.length() ) {
            result += word1[i];
        }

        if(i < word2.length() ) {
            result += word2[i];
        }
    }

    return result;
}

int main()
{
    string word1 = "abc";
    string word2 = "pqrss";

    cout << mergeAlternately(word1, word2);

    return 0;
}