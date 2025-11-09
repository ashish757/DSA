//
// Created by Ashish Raj Singh on 09/11/25.
//


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        int s = n * m;
        cout<<(s + 1) / 2<<endl;
    }

    return 0;
}