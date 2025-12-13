//
// Created by Ashish Raj Singh on 13/12/25.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    int one = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') one++;
    }

    if (one >= 2)  cout<< (s.size()+1) /2;
    else cout<< s.size() /2;
}