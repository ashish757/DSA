//
// Created by Ashish Raj Singh on 19/10/25.
//

#include <iostream>
#include <string>
using namespace std;



int main() {
    string s;
    cin>>s;
    bool found =false;
    for(int i=0;i< 5;i++) {
        string a;
        cin>>a;

        if(s[0] == a[0] || a[1] == s[1]) {
            found = true;
            cout<<"YES"<<endl;
            break;
        }
    }

    if (!found) cout<<"NO"<<endl;

    return 0;
}