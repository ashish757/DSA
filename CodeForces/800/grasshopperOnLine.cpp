//
// Created by Ashish Raj Singh on 26/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        if (x < k) {
            cout << 1<< endl << x<<endl;
        } else if (x == k) {
            cout << 2 << endl <<x/2<<" "<<(x+1)/2<<endl;
        } else if (x % k == 0) {
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
        } else {
            cout << 1<< endl << x<<endl;
        }

        // better sol
        // if (x % k == 0) {
        //     cout << 2 << endl <<x/2<<" "<<(x+1)/2<<endl;
        // }
        // else {
        //     cout << 1<< endl << x<<endl;
        // }
    }
}
