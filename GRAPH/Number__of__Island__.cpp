#include <bits/stdc++.h>
using namespace std;
class Solution
{
     void DFS(vector<vector<char>> &grid, vector<vector<bool>> &visited, int row, int col)
     {
          if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0)
          {
               return;
          }
          if (grid[row][col] == '0')
          {
               return;
          }

          if (visited[row][col] == true)
          {
               return;
          }
          visited[row][col] = true;
          DFS(grid, visited, row + 1, col); // down
          DFS(grid, visited, row - 1, col); // up
          DFS(grid, visited, row, col - 1); // left
          DFS(grid, visited, row, col + 1); // right
     }

public:
     int numIslands(vector<vector<char>> &grid)
     {
          int row = grid.size();
          int col = grid[0].size();

          vector<vector<bool>> visited(row, vector<bool>(col, false));
          int count = 0;
          for (int i = 0; i < row; i++)
          {
               for (int j = 0; j < col; j++)
               {
                    if (grid[i][j] == '1' && visited[i][j] == false)
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

     vector<vector<char>> grid = {
         {'1', '1', '0', '0', '0'},
         {'1', '1', '0', '0', '0'},
         {'0', '0', '1', '0', '0'},
         {'0', '0', '0', '1', '1'}};
     Solution s1;

     int result = s1.numIslands(grid) ; 

     cout << "There are '" << result << "' island in the grid" ;  
     return 0;
}