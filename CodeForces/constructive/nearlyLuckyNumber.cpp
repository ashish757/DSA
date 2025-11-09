//
// Created by Ashish Raj Singh on 11/10/25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    // long long int n;
    string s;
    cin >> s;
    int count = 0;
    for(char c : s)
    {
        if(c == '4' || c == '7') count++;
    }
    string countStr = to_string(count);

    if(countStr.find_first_not_of("47") == string::npos) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }


    return 0;
}