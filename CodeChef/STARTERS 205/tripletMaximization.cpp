//
// Created by Ashish Raj Singh on 27/09/25.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int g = (x +y ) / 3;
        if (y < g){
            cout<< g + y<<endl;
        } else {
            cout<< 2 * g<<endl;
        }

    }
return 0;

}