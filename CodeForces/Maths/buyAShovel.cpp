//
// Created by Ashish Raj Singh on 05/12/25.
//
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, r;
    cin>>k>>r;

    int cost = 0;
    int i =0;
    while (true) {
        cost += k;
        i++;
        if (cost % 10 == 0 || cost % 10 == r) {
            cout<<i<<endl;
            return 0;
        }
    }
}