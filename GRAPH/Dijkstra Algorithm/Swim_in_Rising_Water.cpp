#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool isCheck(int row, int col, vector<vector<int>> &grid,
                  vector<vector<int>> &visited)
     {
          if (row < grid.size() && col < grid[0].size() && row >= 0 && col >= 0 &&
              visited[row][col] == 0)
          {
               return true;
          }
          return false;
     }

public:
     int swimInWater(vector<vector<int>> &grid)
     {
          int n = grid.size();
          int m = grid[0].size();
          priority_queue<pair<int, pair<int, int>>,
                         vector<pair<int, pair<int, int>>>,
                         greater<pair<int, pair<int, int>>>>
              q;

          vector<vector<int>> visited(n, vector<int>(m, 0));
          q.push({grid[0][0], {0, 0}});
          while (!q.empty())
          {
               pair<int, pair<int, int>> p = q.top();
               int time = p.first;
               int row = p.second.first;
               int col = p.second.second;
               q.pop();
               if (visited[row][col])
                    continue;

               visited[row][col] = 1;

               if (row == n - 1 && col == m - 1)
               {
                    return time;
               }

               if (isCheck(row + 1, col, grid, visited))
               {
                    int newTime = max(time, grid[row + 1][col]);

                    q.push({newTime, {row + 1, col}});
               }
               if (isCheck(row - 1, col, grid, visited))
               {
                    int newTime = max(time, grid[row - 1][col]);
                    q.push({newTime, {row - 1, col}});
               }
               if (isCheck(row, col - 1, grid, visited))
               {
                    int newTime = max(time, grid[row][col - 1]);
                    q.push({newTime, {row, col - 1}});
               }
               if (isCheck(row, col + 1, grid, visited))
               {
                    int newTime = max(time, grid[row][col + 1]);
                    q.push({newTime, {row, col + 1}});
               }
          }

          return -1;
     }
};
int main()
{
     Solution s1;

     vector<vector<int>> grid = {
         {0, 1, 2, 3, 4},
         {24, 23, 22, 21, 5},
         {12, 13, 14, 15, 16},
         {11, 17, 18, 19, 20},
         {10, 9, 8, 7, 6}};

     int ans = s1.swimInWater(grid);

     cout << "The minimum time required to reach the bottom-right cell is: "
          << ans << endl;
     return 0;
}