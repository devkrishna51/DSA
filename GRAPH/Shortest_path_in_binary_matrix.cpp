#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool isZero(vector<vector<int>> &grid, int row, int col)
     {
          if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0)
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
     int shortestPathBinaryMatrix(vector<vector<int>> &grid)
     {
          int n = grid.size();
          int m = grid[0].size();

          if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1)
          {
               return -1;
          }
          vector<vector<bool>> visited(n, vector<bool>(m, false));
          vector<vector<int>> dist(n, vector<int>(m, 0));
          queue<pair<int, int>> q;
          q.push({0, 0});

          visited[0][0] = true;
          dist[0][0] = 1;

          while (!q.empty())
          {
               pair<int, int> p = q.front();
               q.pop();

               int row = p.first;
               int col = p.second;

               if (row == n - 1 && col == m - 1)
               {
                    return dist[row][col];
               }
               if (isZero(grid, row - 1, col) && visited[row - 1][col] == false) // up
               {
                    dist[row - 1][col] = dist[row][col] + 1;
                    visited[row - 1][col] = true;
                    q.push({row - 1, col});
                    //
               }
               if (isZero(grid, row + 1, col) && visited[row + 1][col] == false) // down
               {
                    dist[row + 1][col] = dist[row][col] + 1;
                    visited[row + 1][col] = true;
                    q.push({row + 1, col});
                    //
               }
               if (isZero(grid, row, col - 1) && visited[row][col - 1] == false) // left
               {
                    dist[row][col - 1] = dist[row][col] + 1;
                    visited[row][col - 1] = true;
                    q.push({row, col - 1});
                    //
               }
               if (isZero(grid, row, col + 1) && visited[row][col + 1] == false) // right
               {
                    dist[row][col + 1] = dist[row][col] + 1;
                    visited[row][col + 1] = true;
                    q.push({row, col + 1});
                    //
               }
               if (isZero(grid, row - 1, col - 1) && visited[row - 1][col - 1] == false) // up left
               {
                    dist[row - 1][col - 1] = dist[row][col] + 1;
                    visited[row - 1][col - 1] = true;
                    q.push({row - 1, col - 1});
                    //
               }
               if (isZero(grid, row + 1, col + 1) && visited[row + 1][col + 1] == false) // down right
               {
                    dist[row + 1][col + 1] = dist[row][col] + 1;
                    visited[row + 1][col + 1] = true;
                    q.push({row + 1, col + 1});
                    //
               }
               if (isZero(grid, row - 1, col + 1) && visited[row - 1][col + 1] == false) // up right
               {
                    dist[row - 1][col + 1] = dist[row][col] + 1;
                    visited[row - 1][col + 1] = true;
                    q.push({row - 1, col + 1});
                    //
               }
               if (isZero(grid, row + 1, col - 1) && visited[row + 1][col - 1] == false) // down left
               {
                    dist[row + 1][col - 1] = dist[row][col] + 1;
                    visited[row + 1][col - 1] = true;
                    q.push({row + 1, col - 1});
                    //
               }
          }
          return -1;
     }
};
int main()
{
     vector<vector<int>> grid = {
         {0, 0, 1, 0, 0, 0, 1},
         {1, 0, 1, 0, 1, 0, 0},
         {1, 0, 0, 0, 1, 1, 0},
         {1, 1, 1, 0, 0, 0, 0},
         {1, 0, 0, 1, 1, 0, 1},
         {0, 0, 1, 0, 0, 0, 0},
         {1, 1, 1, 1, 1, 1, 0}
     }; 

     Solution s1 ; 
     int result = s1.shortestPathBinaryMatrix(grid) ; 

     cout << "There are '" << result << "' Cells between (0,0) and (n-1 , m-1)" ;
     return 0;
}