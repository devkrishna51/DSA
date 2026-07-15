#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool isValid(vector<vector<int>> &grid, int row, int col)
     {
          int n = grid.size();
          int m = grid[0].size();
          if (row >= n || col >= m || col < 0 || row < 0)
          {
               return false;
          }

          if (grid[row][col] == 0)
          {
               return false;
          }
          if (grid[row][col] == 2)
          {
               return false;
          }
          grid[row][col] = 2;
          return true;
     }

public:
     int orangesRotting(vector<vector<int>> &grid)
     {

          int row = grid.size();
          int col = grid[0].size();

          queue<pair<int, int>> q;
          int fresh_count = 0;
          for (int i = 0; i < row; i++)
          {
               for (int j = 0; j < col; j++)
               {
                    if (grid[i][j] == 2)
                    {
                         q.push({i, j});
                    }
                    if (grid[i][j] == 1)
                    {
                         fresh_count++;
                    }
               }
          }

          int count = 0;
          while (!q.empty())
          {
               int size = q.size();
               bool flag = false;
               for (int k = 0; k < size; k++)
               {
                    pair<int, int> p = q.front();
                    q.pop();

                    int i = p.first;
                    int j = p.second;

                    if (isValid(grid, i + 1, j))
                    {
                         flag = true;
                         fresh_count--;
                         q.push({i + 1, j});
                    }
                    if (isValid(grid, i - 1, j))
                    {
                         flag = true;
                         fresh_count--;
                         q.push({i - 1, j});
                    }
                    if (isValid(grid, i, j - 1))
                    {
                         flag = true;
                         fresh_count--;
                         q.push({i, j - 1});
                    }
                    if (isValid(grid, i, j + 1))
                    {
                         flag = true;
                         fresh_count--;
                         q.push({i, j + 1});
                    }
               }
               if (flag)
               {
                    count++;
               }
          }
          if (fresh_count == 0)
          {
               return count;
          }
          else
          {
               return -1;
          }
     }
};
int main()
{

     vector<vector<int>> grid = {
         {2, 1, 1},
         {1, 1, 0},
         {0, 1, 1}};

     Solution s1;
     int result = s1.orangesRotting(grid);

     cout << result << " minutes take to making oranges Rotten";
     return 0;
}