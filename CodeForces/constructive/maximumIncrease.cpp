//
// Created by Ashish Raj Singh on 19/10/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int last = -1;
    int count = 1;
    int maxCount = INT_MIN;
    for (int i = 1; i <= n; i++) {
        int a;
        cin>>a;
        if (i != 1) {
            if (last < a) count++;
            else {
                count = 1;
            }
        }
        maxCount = max(maxCount, count);
        last = a;
    }
    cout<<maxCount<<endl;

    return 0;
}