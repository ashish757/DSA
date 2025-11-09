//
// Created by Ashish Raj Singh on 14/10/25.
//
#include  <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int yrs = 0;
    while (true) {
        yrs++;

        a = 3 * a;
        b = 2 * b;
        if (a > b) {
            cout<<yrs<<endl;
            break;
        }

    }
    return 0;
}