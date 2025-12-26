//
// Created by Ashish Raj Singh on 24/12/25.
//
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;

        if (c % 2 == 0) {
            if (a <= b) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        } else {
            if (a >= b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
}