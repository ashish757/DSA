//
// Created by Ashish Raj Singh on 13/12/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sx =0, sy =0, sz =0;

    for (int i=0; i<n; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        sx+=a; sy+=b; sz+=c;
    }


    if (sx == 0 && sy == 0 && sz == 0) {
        cout<<"YES"<<"\n";
        return 0;
    }
    cout<<"NO"<<"\n";


}