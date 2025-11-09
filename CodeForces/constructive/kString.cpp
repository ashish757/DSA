//
// Created by Ashish Raj Singh on 07/11/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k;
    string s;
    cin>>k>>s;
    vector<short> freq(26,0);
    for (int i = 0; i < s.length(); i++)
        freq[s[i] - 'a']++;


    for (int i = 0; i < 26; i++) {
        if (freq[i] % k != 0) {
            cout<<-1<<endl;
            return 0;
        }
    }

    string base;
    for (int i = 0; i < 26; i++) {
        int q = freq[i] / k;
        base.append(q, static_cast<char>('a' + i));
    }

    string result;
    for (int i = 0; i < k; i++)
        result += base;

    cout << result << endl;

    return 0;

}