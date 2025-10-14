//
// Created by Ashish Raj Singh on 11/10/25.
//



#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n;
    cin>>n;

    // vector<int> v(n);
    // for (int i = 0; i < n; i++) {
    //     int a;
    //     cin>>a;
    //     v[a-1] = i+1;
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     cout<<v[i]<<" ";
    // }

    string s;

    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;
        s += to_string(i +1);

        if (i != n -1)
            s += ' ';
    }
    cout<<s<<endl;


    return 0;
}
