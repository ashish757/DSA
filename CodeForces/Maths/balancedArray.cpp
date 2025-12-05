//
// Created by Ashish Raj Singh on 02/12/25.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin >> n;

        if (n % 4 != 0) {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        int num = 2;
        for (int i = 0; i < n/2; i++) {
            cout<<num<<" ";
            num += 2;
        }
        num = 1;
        for (int i = 0; i < n/2; i++) {
            if (i == n/2-1) {
                cout<<num + n /2<<" ";
            } else {
                cout<<num<<" ";
            }
            num += 2;
        }
        cout<<endl;


    }

    return 0;
}