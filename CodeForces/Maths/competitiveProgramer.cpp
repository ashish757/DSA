//
// Created by Ashish Raj Singh on 13/12/25.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {

        string y;
        cin >>y;
        int even = 0, sum =0;
        bool z = false;
        for (const char i : y) {
           const int d = i - '0';
            sum += d;
            if (d % 2 == 0) even++;
            if (d == 0) z = true;
        }

        if (sum % 3 ==0 && z && even >= 2) cout<<"red"<<endl;
        else cout<<"cyan"<<endl;
    }


    return 0;
}