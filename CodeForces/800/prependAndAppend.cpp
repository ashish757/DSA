//
// Created by Ashish Raj Singh on 07/01/26.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int steps = 0;
        for (int i = 0, j = n-1; i < j; i++, j-- ) {
            if (s[i] == s[j]) break;
            steps++;
        }

        cout<<n - 2 * steps<<endl;
    }
}
