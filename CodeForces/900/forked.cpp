#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<pair<int, int>> getKnightMoves(int x, int y, int a, int b) {
    set<pair<int, int>> moves;
    int dx[] = {a, a, -a, -a, b, b, -b, -b};
    int dy[] = {b, -b, b, -b, a, -a, a, -a};

    for (int i = 0; i < 8; i++) {
        moves.insert({x + dx[i], y + dy[i]});
    }
    return moves;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        set<pair<int, int>> movesK = getKnightMoves(xk, yk, a, b);
        set<pair<int, int>> movesQ = getKnightMoves(xq, yq, a, b);

        int count = 0;
        for (auto p : movesK) {
            if (movesQ.count(p)) {
                count++;
            }
        }

        cout << count << "\n";
    }
    return 0;
}