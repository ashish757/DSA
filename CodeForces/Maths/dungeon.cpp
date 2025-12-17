//
// Created by Ashish Raj Singh on 17/12/25.
//
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int hp = a + b +c;

        if (hp % 9 == 0 && min({a, b, c}) >= hp/9 ) {
            cout << "YES" << "\n";
        } else cout<<"NO"<<"\n";


    }
}