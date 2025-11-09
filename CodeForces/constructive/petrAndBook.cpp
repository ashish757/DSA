#include  <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p;
    cin>>p;
    int d = 0;
    vector<int> v(7);
    for (int i = 0; i < 7; ++i) {
        cin>>v[i];
    }

    int i = 0;
    while (p>0) {
        d++;
        if (d == 8) d = 1;
        p -= v[i];
        i++;
        if (i > 6) i = 0;
    }

    cout<<d<<endl;


    return 0;
}