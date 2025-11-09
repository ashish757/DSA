//
// Created by Ashish Raj Singh on 03/10/25.
//
#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if (n == 0 || n == 1) {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        // for min
        int min = n - 2;

        // for max
        int max = min * (min + 1) / 2;

        cout<<min<<" "<<max<<endl;

    }

}
