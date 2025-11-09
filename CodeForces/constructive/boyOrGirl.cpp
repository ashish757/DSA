//
// Created by Ashish Raj Singh on 14/10/25.
//
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin>>s;
    unordered_set<int> set;
    for (int i = 0; i < s.length(); i++) {
       set.emplace(s[i]);
    }

    (set.size() % 2 == 0 ) ? cout<<"CHAT WITH HER!" : cout<<"IGNORE HIM!";


    return 0;
}