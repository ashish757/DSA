//
// Created by Ashish Raj Singh on 12/12/25.
//
#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--) {
        long long c, s;
        cin>>c>>s;

        cout<<(c - s%c) * (s/c) * (s/c) + s%c * (s/c+1) * (s/c+1)<<endl;

    }
    return 0;
}