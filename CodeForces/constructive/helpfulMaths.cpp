//
// Created by Ashish Raj Singh on 14/10/25.
//
#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<int> v;
    int oneIdx = -1;
    for(int i=0;i<s.size();i++) {
        if (s[i] != '+') {
            v.push_back(s[i])
            ;
        }
    }

    return 0;
}
