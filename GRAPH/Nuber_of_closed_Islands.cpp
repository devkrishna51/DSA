// Given a 2D grid consists of 0s (land) and 1s (water).
// An island is a maximal 4-directionally connected group
// of 0s and a closed island is an island totally
// (all left, top, right, bottom) surrounded by 1s.

// Return the number of closed islands.
#include <bits/stdc++.h>
using namespace std;
class Solution
{

     void DFS(vector<vector<int>> &grid, vector<vector<bool>> &visited, int row, int col)
     {
          if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0)
          {
               return;
          }
          if (visited[row][col] == true)
          {
               return;
          }
          if (grid[row][col] == 1)
          {
               return;
          }
          visited[row][col] = true;
          DFS(grid, visited, row + 1, col);
          DFS(grid, visited, row - 1, col);
          DFS(grid, visited, row, col + 1);
          DFS(grid, visited, row, col - 1);
     }

public:
     int closedIsland(vector<vector<int>> &grid)
     {
          int n = grid.size();
          int m = grid[0].size();
          vector<vector<bool>> visited(n, vector<bool>(m, false));
          for (int i = 0; i < n; i++)
          {
               if (grid[i][0] == 0)
               {
                    DFS(grid, visited, i, 0);
               }
          }
          for (int i = 0; i < n; i++)
          {
               if (grid[i][m - 1] == 0)
               {
                    DFS(grid, visited, i, m - 1);
               }
          }
          for (int j = 0; j < m; j++)
          {
               if (grid[0][j] == 0)
               {
                    DFS(grid, visited, 0, j);
               }
          }
          for (int j = 0; j < m; j++)
          {
               if (grid[n - 1][j] == 0)
               {
                    DFS(grid, visited, n - 1, j);
               }
          }

          int count = 0;
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (grid[i][j] == 0 && visited[i][j] == false)
                    {
                         count++;
                         DFS(grid, visited, i, j);
                    }
               }
          }

          return count;
     }
};
int main()
{
     vector<vector<int>> grid = {
         {1, 1, 1, 1, 1, 1, 1, 0},
         {1, 0, 0, 0, 0, 1, 1, 0},
         {1, 0, 1, 0, 1, 1, 1, 0},
         {1, 0, 0, 0, 0, 1, 0, 1},
         {1, 1, 1, 1, 1, 1, 1, 0}};

     Solution s1 ;
     int result = s1.closedIsland(grid) ; 

     cout << "There are '" << result << "' Closed Islands" ; 
     return 0;
}