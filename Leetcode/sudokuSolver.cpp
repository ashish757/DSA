//
// Created by Ashish Raj Singh on 10/07/25.
//
#include <iostream>
using namespace std;

bool isValid(vector<vector<char>> &board, int r, int c, int value) {
    // horizontal
    int col = 0;
    while(col < 9) {
        if (board[r][col] == value) {
            return false;
        }
        col++;
    }

    // vertical
    int row = 0;
    while(row < 9) {
        if (board[row][c] == value) {
            return false;
        }
        row++;
    }

    // check in cell
    row = r/3;
    col = c/3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[row*3+i][col*3+j] == value) {
                return false;
            }
        }
    }

    return true;
}

void boardPrinter(vector<vector<char>> &board) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

bool solver(vector<vector<char>> &board, int r, int c, vector<vector<char>> &ans) {

    int nextRow = r, nextCol = c+1;
    if (nextCol == 9) {
        nextRow++;
        nextCol = 0;
    }

    if (r == 9) {
        return true;
    }

    if (board[r][c] != '.') {
        return solver(board, nextRow, nextCol, ans);

    }


    for (char i = '1'; i <= '9'; i++) {
        if (isValid(board, r, c,  i)) {
            board[r][c] = i;

            // boardPrinter(board);

            if (solver(board, nextRow, nextCol, ans)) {
                return true;
            }
            board[r][c] = '.';

        }


    }
    return false;
}



int main() {
    // vector<vector<char>> board = {  {'5','3','.','.','7','.','.','.','.'},
    //                                 {'6','.','.','1','9','5','.','.','.'},
    //                                 {'.','9','8','.','.','.','.','6','.'},
    //                                 {'8','.','.','.','6','.','.','.','3'},
    //                                 {'4','.','.','8','.','3','.','.','1'},
    //                                 {'7','.','.','.','2','.','.','.','6'},
    //                                 {'.','6','.','.','.','.','2','8','.'},
    //                                 {'.','.','.','4','1','9','.','.','5'},
    //                                 {'.','.','.','.','8','.','.','7','9'}};

    vector<vector<char>> board  = {{'.','.','.','.','.','.','.','.','.'},
        {'.','9','.','.','1','.','.','3','.'},{'.','.','6','.','2','.','7','.','.'},
        {'.','.','.','3','.','4','.','.','.'},{'2','1','.','.','.','.','.','9','8'},
        {'.','.','.','.','.','.','.','.','.'},{'.','.','2','5','.','6','4','.','.'},
        {'.','8','.','.','.','.','.','1','.'},{'.','.','.','.','.','.','.','.','.'}};

    vector<vector<char>> ans = {};
    solver(board, 0, 0, ans);
    boardPrinter(board);

    return 0;
}