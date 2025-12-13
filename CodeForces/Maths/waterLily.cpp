//
// Created by Ashish Raj Singh on 13/12/25.
//
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    long double  h, l;
    cin>>h>>l;
    cout<<fixed<<setprecision(13);
    cout<< (l*l - h*h)/ (2 * h) <<"\n";
}