//
// Created by Ashish Raj Singh on 14/10/25.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;

    if (s[0] >= 'A' && s[0] <= 'Z') {

    } else {
        char a = s[0] - 32;

        s[0] = a;
    }

    cout<<s;

    return 0;
}