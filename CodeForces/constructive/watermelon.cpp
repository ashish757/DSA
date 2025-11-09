//
// Created by Ashish Raj Singh on 02/10/25.
//
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    if (n < 4) cout<<"no";
    else if (n % 2 == 0) cout<<"yes";
    else cout<<"no";
    return 0;
}