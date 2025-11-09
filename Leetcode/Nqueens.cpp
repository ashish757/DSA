//
// Created by Ashish Raj Singh on 10/07/25.
//
#include <iostream>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n) {
    // check for queen in same coloumn
    int i = row;
    int j;
    while (i >= 0) {
        if (board[i][col] == 'Q') {
            return false;
        }
        i--;
    }

    // check for queen in left diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0) {

        if (board[i][j] == 'Q') {
            return false;
        }
        i--;
        j--;
    }

    // check for queen in right diagonal
    i = row;
    j = col;
    while (i >= 0 && j < n) {
        if (board[i][j] == 'Q') {
            return false;
        }
        i--;
        j++;
    }


    return true;
}

void placeQueens(vector<string> &board, int n, int row, vector<vector<string>> &ans) {
    if (row  == n) {
        ans.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {

        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';
            placeQueens(board, n, row + 1, ans);
            board[row][col] = '.';
        }

    }
}



int main() {
    int n = 4;
    vector<string> board(n, string(n, *"."));
    // vector<string> board = {".Q..", "....", "....", "...."};

    vector<vector<string>> ans  = {{}};

    placeQueens(board, n, 0, ans);
    // cout << isSafe(board, 2, 2, n) << endl;

    for (auto & e: ans ){
        for (auto & i: e) {
            cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}