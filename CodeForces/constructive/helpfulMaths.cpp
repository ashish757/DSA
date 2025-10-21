//
// Created by Ashish Raj Singh on 14/10/25.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<char> v;
    int oneIdx = -1;
    for(char i : s) {
        if (i != '+') {
            if (i == '1') {
                oneIdx == -1 ? oneIdx = 0 : oneIdx++;
                v.insert(v.begin() + 0, i);
            } else if (i == '2') {
                v.insert(v.begin() + oneIdx+1, i);
            }
            else if (i == '3') {
                v.push_back(i);
            }
        }
    }

    for (int i =0; i < v.size(); i++) {
        cout<<v[i];
        i == v.size() -1 ? cout<<"" : cout<<"+";
    }

    return 0;
}
