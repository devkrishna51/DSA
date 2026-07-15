// You are given an m x n matrix board containing 
// letters 'X' and 'O', capture regions that are surrounded:

// Connect: A cell is connected to adjacent cells 
// horizontally or vertically.
// Region: To form a region connect every 'O' cell.
// Surround: A region is surrounded if none of the 'O' 
// cells in that region are on the edge of the board. Such regions are completely enclosed by 'X' cells.
// To capture a surrounded region, replace all 'O's with 
// 'X's in-place within the original board. You do not 
// need to return anything.

 

// Example 1:

// Input: board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]

// Output: [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]]

#include <bits/stdc++.h>
using namespace std;
class Solution
{
     void DFS(vector<vector<char>> &board, vector<vector<char>> &visited, int row, int col)
     {
          if (row >= board.size() || col >= board[0].size() || row < 0 || col < 0)
          {
               return;
          }
          if (visited[row][col] == 'B')
          {
               return;
          }
          if (board[row][col] == 'X')
          {
               return;
          }
          visited[row][col] = 'B';
          DFS(board, visited, row + 1, col);
          DFS(board, visited, row - 1, col);
          DFS(board, visited, row, col + 1);
          DFS(board, visited, row, col - 1);
     }

public:
     void solve(vector<vector<char>> &board)
     {

          int n = board.size();
          int m = board[0].size();
          vector<vector<char>> visited(n, vector<char>(m, 'X'));
          queue<pair<int, int>> q;

          for (int i = 0; i < n; i++)
          {
               if (board[i][0] == 'O')
               {
                    q.push({i, 0});
               }
          }
          for (int i = 0; i < n; i++)
          {
               if (board[i][m - 1] == 'O')
               {
                    q.push({i, m - 1});
               }
          }
          for (int j = 0; j < m; j++)
          {
               if (board[0][j] == 'O')
               {
                    q.push({0, j});
               }
          }
          for (int j = 0; j < m; j++)
          {
               if (board[n - 1][j] == 'O')
               {
                    q.push({n - 1, j});
               }
          }
          while (!q.empty())
          {
               pair<int, int> p = q.front();
               int row = p.first;
               int col = p.second;
               q.pop();
               DFS(board, visited, row, col);
          }

          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (visited[i][j] != 'B' && board[i][j] != 'X')
                    {
                         board[i][j] = 'X';
                    }
               }
          }
     }
};
int main()
{

     vector<vector<char>> board = {
         {'X', 'X', 'X', 'X'},
         {'X', 'O', 'O', 'X'},
         {'X', 'X', 'O', 'X'},
         {'X', 'O', 'X', 'X'}};

     Solution s1;

     s1.solve(board);

     for(auto x : board)
     {
          for(auto x2 : x)
          {
               cout << x2 <<" " ; 
          }
          cout << endl ; 
     }
     return 0;
}