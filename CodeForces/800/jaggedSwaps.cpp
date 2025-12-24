//
// Created by Ashish Raj Singh on 19/12/25.
//
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            int a;
            cin>>a;
            if (i == 1 && a == 1) flag = true;
        }


        if (flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
}