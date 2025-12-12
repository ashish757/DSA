//
// Created by Ashish Raj Singh on 05/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a, b;
        cin>>a>>b;

        const int diff = abs(a - b);
        cout<<(diff+9)/10<<endl;
    }

}