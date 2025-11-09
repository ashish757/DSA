//
// Created by Ashish Raj Singh on 04/08/25.
//


#include <iostream>
using namespace std;


void check(vector<vector<int>> &grid, int r, int c, int num, vector<int> &pos) {
    int n = grid.size();
    if (r >= 0 && r < n && c >= 0 && c < n) {
        if (grid[r][c] == num) {
            pos = {r, c};
        }
    }
}

vector<int> validMove(vector<vector<int>> grid, int r, int c, int num) {

    vector<int> pos = {-1, -1};
    // up
    int row = r - 2;
    int col = c - 1;
    check(grid, row, col, num, pos);

    col = c + 1;
    check(grid, row, col, num, pos);

    // down
    row = r + 2;
    col = c - 1;
    check(grid, row, col, num, pos);

    col = c + 1;
    check(grid, row, col, num, pos);

    // Right
    col = c + 2;
    row = r - 1;
    check(grid, row, col, num, pos);

    row = r + 1;
    check(grid, row, col, num, pos);

    // Left
    col = c - 2;
    row = r - 1;
    check(grid, row, col, num, pos);

    row = r + 1;
    check(grid, row, col, num, pos);

    return pos;

}

bool checkValidGrid(vector<vector<int>>& grid, int r, int c) {
    if (grid[r][c] == grid.size() * grid.size() - 1) {
        return true;
    }
    vector<int> pos = validMove(grid, r, c, grid[r][c] + 1);
    if (pos[0] == -1) {
        return false;
    }
    return checkValidGrid(grid, pos[0], pos[1]);
}

int main() {
    vector<vector<int>> grid ={{0,3,6}, {5,8,1}, {2,7,4}};
    cout<< checkValidGrid(grid, 0, 0);
    return 0;
}