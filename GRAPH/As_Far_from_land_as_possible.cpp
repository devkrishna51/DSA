#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool isCheck(vector<vector<int>> &grid, vector<vector<bool>> &visited, int row, int col)
     {
          if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0)
          {
               return false;
          }
          if (visited[row][col] == true)
          {
               return false;
          }
          if (grid[row][col] == 1)
          {
               return false;
          }
          return true;
     }

public:
     int maxDistance(vector<vector<int>> &grid)
     {
          int n = grid.size();
          int m = grid[0].size();
          vector<vector<bool>> visited(n, vector<bool>(m, false));
          vector<vector<int>> distance(n, vector<int>(m, -1));
          queue<pair<int, int>> q;
          int waterCount = 0;
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (grid[i][j] == 1)
                    {
                         visited[i][j] = true;
                         q.push({i, j});
                         distance[i][j] = 0;
                    }
                    if (grid[i][j] == 0)
                    {
                         waterCount++;
                    }
               }
          }
          if (q.empty() || waterCount == 0)
          {
               return -1;
          }
          while (!q.empty())
          {
               pair<int, int> p = q.front();
               q.pop();
               int row = p.first;
               int col = p.second;

               if (isCheck(grid, visited, row + 1, col))
               {
                    visited[row + 1][col] = true;
                    distance[row + 1][col] = distance[row][col] + 1;
                    q.push({row + 1, col});
               }
               if (isCheck(grid, visited, row - 1, col))
               {
                    visited[row - 1][col] = true;
                    distance[row - 1][col] = distance[row][col] + 1;
                    q.push({row - 1, col});
               }
               if (isCheck(grid, visited, row, col + 1))
               {
                    visited[row][col + 1] = true;
                    distance[row][col + 1] = distance[row][col] + 1;
                    q.push({row, col + 1});
               }
               if (isCheck(grid, visited, row, col - 1))
               {
                    visited[row][col - 1] = true;
                    distance[row][col - 1] = distance[row][col] + 1;
                    q.push({row, col - 1});
               }
          }
          int ans = INT_MIN;
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    ans = max(ans, distance[i][j]);
               }
          }
          return ans;
     }
};
int main()
{
     vector<vector<int>> grid = {
         {1, 0, 1},
         {0, 0, 0},
         {1, 0, 1}};
     Solution s1;
     int result = s1.maxDistance(grid);

     cout << "The Maximum Distance is : " << result << endl ; 
     return 0;
}