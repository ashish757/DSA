//
// Created by Ashish Raj Singh on 19/10/25.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int d = static_cast<int>(floor(log10(n))) + 1;
        cout<< (d * (d +1) / 2 )+ ((n % 10) -1 )* 10<<endl;
    }
    return 0;
}