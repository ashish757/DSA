//
// Created by Ashish Raj Singh on 17/12/25.
//
#include <iostream>
using namespace std;


int main() {
    unsigned long long t;
    cin >> t;
    while (t--) {
        unsigned long long n, k;
        cin >> n >> k;
        cout<<(((n+k-1)/k)*k + n-1) /n<<endl;
    }
    return 0;
}