//
// Created by Ashish Raj Singh on 03/09/25.
//
#include <iostream>;
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push(s[0]);

        for (int i =1; i<s.length(); i++) {
            if(st.empty()) {
                st.push(s[i]);
                continue;
            }
            if(s[i] == ')' && st.top() != '(') return false;
            if(s[i] == ']' && st.top() != '[') return false;
            if(s[i] == '}' && st.top() != '{') return false;

            if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                st.pop();
            } else {
                st.push(s[i]);
            }

        }

        return st.empty();

    }
};