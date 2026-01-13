//
// Created by Ashish Raj Singh on 26/12/25.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long dx = (x2 - x1);
        long long dy = (y2 - y1);

        long long height  = x2 -x1 +y1;

        if (y2 < height || y2 < y1) cout<<-1<<"\n";
        else if (y2 == height) cout<<x2-x1<<"\n";
        else {
            cout<<(2 * dy - dx)<<"\n";
        }

    }
}
