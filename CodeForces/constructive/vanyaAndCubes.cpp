//
// Created by Ashish Raj Singh on 19/10/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;


    int currReq = 1;
    int level = 0;
    int add = 2;
    while (n-currReq >= 0) {
        n -= currReq;
        level++;
        currReq +=add;
        add++;
    }
    cout<<level<<endl;
    return 0;
}

