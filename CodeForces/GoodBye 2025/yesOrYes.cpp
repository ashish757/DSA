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
        int n = s.length();

        int count =0 ;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'Y') count++;
        }

        if (count >= 2) {
            cout<<"No"<<endl;
        } else {
            cout<<"Yes"<<endl;
        }

    }
}