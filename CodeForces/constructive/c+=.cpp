//
// Created by Ashish Raj Singh on 18/10/25.
//
#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--) {
        long a, b, c;
        cin >> a >> b>>c;
        int steps = 0;
        while (true) {
            if (a > c || b > c) {
                break;
            }
            steps++;
            if (a > b) {
                b = a + b;
            } else {
                a = a + b;
            }
        }
        cout << steps << endl;
    }



    return 0;
}