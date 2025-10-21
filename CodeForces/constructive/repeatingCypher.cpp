//
// Created by Ashish Raj Singh on 20/10/25.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s, ans;
    cin>>s;
    int j = 2;
    for (int i = 0; i < n;) {
        ans += s[i];
        i = i + j++;
    }
    cout << ans << endl;
    return 0;
}