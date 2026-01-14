//
// Created by Ashish Raj Singh on 14/01/26.
//
#include <iostream>
using namespace std;


int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        int ans = 0;
        for (int i = 1 ; i<= n ; i++ )
        {
            if (n % i == 0) ans ++;
            else break;
        }
        cout << ans << endl;
    }
}