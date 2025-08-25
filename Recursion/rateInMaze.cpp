// write a program to implement Rate in Maze problem using recursion
// The rat can move in 4 directions: up, down, left, right
// The rat cannot move to a cell which is blocked (0)?
// The rat can move to a cell which is open (1)?

#include<iostream>
#include<vector>

using namespace std;

// function to check if the cell is valid or not
void helper(vector<vector<int>> &maze, int raw, int col, string path , vector<string> &ans) {
    int n = maze.size();

    // base case if any of the condition is false
    if(raw < 0 || col < 0 || raw >= n || col >= n || maze[raw][col] == 0) {
        return;
    }

    // base case if we reach the destination
    if(raw == n-1 && col == n-1) {
        ans.push_back(path);
        return;
    }

    // mark the cell as visited
    maze[raw][col] = 0;

    // explore all 4 directions
    helper(maze, raw+1, col, path+'D', ans);  // down
    helper(maze, raw, col-1, path+'L', ans); // left
    helper(maze, raw, col+1, path+'R', ans); // right
    helper(maze, raw-1, col, path+'U', ans);  // up

    // backtrack - unmark the cell as visited
    maze[raw][col] = 1;

}

vector<string> findPath(vector<vector<int>> &maze) {
    int n = maze.size();
    vector<string> ans;
    string path = "";
    helper(maze, 0, 0, path, ans);
    return ans;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> paths = findPath(maze);
    for(string s : paths) {
        cout << s << endl;
    }   


    return 0;
}