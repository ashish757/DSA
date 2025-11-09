//
// Created by Ashish Raj Singh on 28/09/25.
//
#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2>>x3;

    int ma = max({x1, x2, x3});
    int mi = min({x1, x2, x3});

    cout<<abs(ma -mi)<<endl;


    return 0;
}
