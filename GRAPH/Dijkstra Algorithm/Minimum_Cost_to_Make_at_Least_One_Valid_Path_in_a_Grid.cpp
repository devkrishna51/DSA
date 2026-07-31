#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool isCheck(int row, int col, int n, int m)
     {
          if (row < n && col < m && row >= 0 && col >= 0)
          {
               return true;
          }
          return false;
     }

public:
     int minCost(vector<vector<int>> &grid)
     {

          int n = grid.size();
          int m = grid[0].size();
          vector<vector<int>> costArr(n, vector<int>(m, INT_MAX));

          priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;

          costArr[0][0] = 0;
          q.push({0, {0, 0}});

          while (!q.empty())
          {
               pair<int, pair<int, int>> p = q.top();
               q.pop();

               int cost = p.first;
               int row = p.second.first;
               int col = p.second.second;

               if (cost > costArr[row][col])
               {
                    continue;
               }

               if (isCheck(row, col + 1, n, m))
               {
                    int newCost = 0;
                    if (grid[row][col] == 1)
                    {
                         newCost = cost;
                    }
                    else
                    {
                         newCost = cost + 1;
                    }

                    if (newCost < costArr[row][col + 1])
                    {
                         costArr[row][col + 1] = newCost;
                         q.push({newCost, {row, col + 1}});
                    }
               }
               if (isCheck(row, col - 1, n, m))
               {
                    int newCost = 0;
                    if (grid[row][col] == 2)
                    {
                         newCost = cost;
                    }
                    else
                    {
                         newCost = cost + 1;
                    }

                    if (newCost < costArr[row][col - 1])
                    {
                         costArr[row][col - 1] = newCost;
                         q.push({newCost, {row, col - 1}});
                    }
               }
               if (isCheck(row + 1, col, n, m))
               {
                    int newCost = 0;
                    if (grid[row][col] == 3)
                    {
                         newCost = cost;
                    }
                    else
                    {
                         newCost = cost + 1;
                    }

                    if (newCost < costArr[row + 1][col])
                    {
                         costArr[row + 1][col] = newCost;
                         q.push({newCost, {row + 1, col}});
                    }
               }
               if (isCheck(row - 1, col, n, m))
               {
                    int newCost = 0;
                    if (grid[row][col] == 4)
                    {
                         newCost = cost;
                    }
                    else
                    {
                         newCost = cost + 1;
                    }

                    if (newCost < costArr[row - 1][col])
                    {
                         costArr[row - 1][col] = newCost;
                         q.push({newCost, {row - 1, col}});
                    }
               }
          }
          return costArr[n - 1][m - 1];
     }
};
int main()
{
     Solution s1;

     vector<vector<int>> grid = {
         {1, 2, 3, 4},
         {4, 3, 2, 1},
         {1, 1, 4, 3},
         {2, 2, 1, 4}};

     int ans = s1.minCost(grid);

     cout << "The minimum cost to make at least one valid path is: "
          << ans << endl;
     return 0;
}