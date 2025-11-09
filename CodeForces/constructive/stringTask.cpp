//
// Created by Ashish Raj Singh on 21/10/25.
//
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result;
    // vector<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'Y', 'y'};
    string vowels = "aAeEiIoOuUyY";


    for (char c : s) {
        if (vowels.find(c) == string::npos) {
            // not a vowel
            if (c >= 'A' && c <= 'Z') c = static_cast<char>(c + 32);  // convert to lowercase
            result += '.';
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}
