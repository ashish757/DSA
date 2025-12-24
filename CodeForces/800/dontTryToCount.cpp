//
// Created by Ashish Raj Singh on 19/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

        if (x.find(s) != string::npos) {
            cout<<0<<endl;
            continue;
        }

        int c = 0;
        int found = false;
        while (c<= 5) {
            x += x;
            c++;
            if (x.find(s) != string::npos) {
                cout<<c<<endl;
                found = true;
                break;
            }
        }

        if (!found) cout<<-1<<endl;
    }
}