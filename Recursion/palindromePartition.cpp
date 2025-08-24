// write a program to partition a string such that every part is a palindrome

#include<iostream>
#include<vector>
using namespace std;

// function to check if a string is palindrome or not
bool isPalin(string s){
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}

// function to get all possible partitions of the string
void getAllParts(string s, vector<string> &partitions , vector<vector<string>> &ans) {
    if(s.size() == 0) {
        ans.push_back(partitions);
        return;
    }

    // try every possible partition
    for(int i=0; i<s.size(); i++) {
        string part = s.substr(0 , i+1);
        // check if the part is palindrome
        if(isPalin(part)) {
            partitions.push_back(part);
            getAllParts(s.substr(i+1) , partitions, ans);
            partitions.pop_back();
        }
    }
}

// function to partition the string
vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> partitions;

    getAllParts(s, partitions , ans);
    return ans;
}

int main(){
    string s = "aab";
    int n = s.size();

    vector<vector<string>> ans = partition(s);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}