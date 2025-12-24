//
// Created by Ashish Raj Singh on 19/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        if (n % 3 ==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}