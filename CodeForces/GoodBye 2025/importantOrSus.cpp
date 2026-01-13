//
// Created by Ashish Raj Singh on 27/12/25.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        unsigned long n = s.length();

        long long count =0;
        if (s[0] != 's') count++;
        s[0] = 's';

       for (int i = 1; i < n-1; i++) {
            if (s[i] == 'u') {
                if (s[i-1] != 's') {
                    s[i] = 's';
                    count++;
                }
            }
       }

        if (s[n-1] != 's') count++;

        cout << count << endl;

    }
}