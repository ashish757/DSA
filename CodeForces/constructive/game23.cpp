//
// Created by Ashish Raj Singh on 07/11/25.
//
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin>>n>>m;

    int q = 0;
    int s = 0;
    if (m % n == 0) {
        q = m / n;
        s = 0;
        while (q % 2 == 0) {
            q /= 2;
            s++;
        }
        while (q % 3 == 0) {
            q /= 3;
            s++;
        }
    }

    if (q == 1) cout<<s<<"\n";
    else cout<<-1<<"\n";

    return 0;
}