//
// Created by Ashish Raj Singh on 27/09/25.
//

#include <iostream>
using namespace std;

int main() {
    int lines;
    cin>>lines;
    int x = 0;

    for(int i=0;i<lines;i++) {
        string line;
        cin>>line;
        if (line == "--X" || line == "X--") {
            x--;
        }
        else if (line == "++X" || line == "X++") {
            x++;
        }
    }

    cout<<x<<endl;
    return 0;
}