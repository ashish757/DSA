//
// Created by Ashish Raj Singh on 16/12/25.
//
#include <iostream>
using namespace std;

int main() {
    string n;
    cin>>n;
    string ans = n;
   for (int i= n.length() -1; i>= 0; i--) {
       ans+= n[i];
   }

    cout<<ans<<endl;

}