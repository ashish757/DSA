//
// Created by Ashish Raj Singh on 27/09/25.
//
#include <iostream>
using namespace std;

int main() {

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d>>p>>nl>>np;

    int toastsFromDrink = (k * l) / nl;
    int toastsFromSalt = p / np;
    int toastsFromLime = (c * d);

    int Toasts = min({toastsFromDrink, toastsFromSalt, toastsFromLime});

    cout<<Toasts / n<<endl;
    return 0;
}