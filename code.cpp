//
// Created by Ashish Raj Singh on 15/07/25.
//
#include <iostream>
using namespace std;


void func() {
    int year;
    cin>>year;
    // (year % 100 ==0 )? (year % 400 == 0) ? cout<<"yes" : cout<<"no" : (year % 4 ==0) ? cout<<"yes" : cout<<"no"<<endl;

    // (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) ? cout<<"yes" : cout<<"no";
    int a = 5;
    (a++);
    cout<<a;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    func();


    return 0;
}