//
// Created by Ashish Raj Singh on 11/10/25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    bool a;
    for (int i =0; i < n; i++) {
        cin>>a;
        if (a) {
            cout<<"HARD"<<endl;
            break;
        }
    }

    if(!a) cout<<"EASY"<<endl;

    return 0;
}