#include <bits/stdc++.h>
using namespace std;
class Solution
{
     void DFS(vector<vector<int>> &grid, vector<vector<bool>> &visited, int row, int col)
     {
          if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size())
          {
               return;
          }
          if (visited[row][col] == true)
          {
               return;
          }
          if (grid[row][col] == 0)
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
     int numEnclaves(vector<vector<int>> &grid)
     {
          int n = grid.size();
          int m = grid[0].size();
          queue<pair<int, int>> q;
          for (int i = 0; i < n; i++)
          {
               if (grid[i][0] == 1)
               {
                    q.push({i, 0});
               }
          }
          for (int i = 0; i < n; i++)
          {
               if (grid[i][m - 1] == 1)
               {
                    q.push({i, m - 1});
               }
          }
          for (int j = 0; j < m; j++)
          {
               if (grid[0][j] == 1)
               {
                    q.push({0, j});
               }
          }
          for (int j = 0; j < m; j++)
          {
               if (grid[n - 1][j] == 1)
               {
                    q.push({n - 1, j});
               }
          }
          vector<vector<bool>> visited(n, vector<bool>(m, false));
          while (!q.empty())
          {
               pair<int, int> p = q.front();
               int row = p.first;
               int col = p.second;
               q.pop();
               DFS(grid, visited, row, col);
          }
          int count = 0;
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (visited[i][j] != true && grid[i][j] == 1)
                    {
                         count++;
                    }
               }
          }
          return count;
     }
};
int main()
{

     vector<vector<int>> grid = {
         {0, 0, 0, 0},
         {1, 0, 1, 0},
         {0, 1, 1, 0},
         {0, 0, 0, 0}};

     Solution s1;

     int result = s1.numEnclaves(grid);

     cout << result << endl ; 
     return 0;
}