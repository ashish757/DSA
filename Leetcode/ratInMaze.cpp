//
// Created by Ashish Raj Singh on 10/07/25.
//
#include <iostream>;
using namespace std;

void findPath(vector<vector<int>> &maze, int row, int col, string path, vector<string> &ans) {
    if (row == maze.size() - 1 && col == maze[0].size() - 1) {
        ans.push_back(path);
        return;
    }
    if  (row< 0 || col < 0 || row >= maze.size() || col >= maze[0].size() || maze[row][col] == 0 || maze[row][col] == 2) {
        return;
    }
    maze[row][col] = 2;

    findPath(maze, row + 1, col, path +"D", ans);
    findPath(maze, row, col + 1, path+"R", ans);
    findPath(maze, row-1, col, path+"U", ans);
    findPath(maze, row, col - 1, path+"L", ans);

    if (maze[row][col] == 2) {
        maze[row][col] = 1;
    }
}


int main() {
    vector<vector<int>> maze = {{1,0,0,0},
                                {1,1,0,1},
                                {1,1,0,0},
                                {0,1,1,1}};
    string path;
    vector<string> ans;

    findPath(maze, 0, 0, path, ans);

    for (auto & i : ans) {
            cout<<i;
        cout << endl;
    }
    return 0;
}