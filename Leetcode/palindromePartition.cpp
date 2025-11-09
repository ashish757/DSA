//
// Created by Ashish Raj Singh on 17/07/25.
//
#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    if (s.length() == 1) return true;
    for (int i =0; i <= s.length()/2; i++) {
        if (s[i] != s[s.length()-i-1]) {
            return false;
        }
    }
    return true;
}

void getAllParts(string s, vector<string> &partitions, vector<vector<string>> &ans) {
    if(s.size() == 0) {
        ans.push_back(partitions);
        return;
    }
    for (int i=0; i<s.size(); i++) {
        string part = s.substr(0, i+1);
        if(isPalindrome(part)) {
            partitions.push_back(part);
            getAllParts(s.substr(i+1), partitions, ans);
            partitions.pop_back();
        }
    }
}
int main() {
    string s= "aab";
    vector<vector<string>> answer = {};
    vector<string> partitions = {};
    getAllParts(s, partitions, answer);

    return 0;
}