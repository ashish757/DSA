//
// Created by Ashish Raj Singh on 07/10/25.
//

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    unordered_map<string, int> m = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    int faces = 0;
    for (int i = 0; i < n; i++) {
        string a;
        cin>>a;

        faces += m[a];
    }

    cout<<faces;
    return 0;
}