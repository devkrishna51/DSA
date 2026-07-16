// You are given two m x n binary matrices
// grid1 and grid2 containing only 0's (representing water) and 1's
// (representing land). An island is a group of 1's connected 4-directionally
// (horizontal or vertical). Any cells outside of the grid are considered water cells.

// An island in grid2 is considered a sub-island if there is an island in
//  grid1 that contains all the cells that make up this island in grid2.

// Return the number of islands in grid2 that are considered sub-islands.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool DFS(vector<vector<int>> &grid1,
              vector<vector<int>> &grid2,
              vector<vector<bool>> &visited,
              int row, int col)
     {

          if (row < 0 || col < 0 || row >= grid2.size() || col >= grid2[0].size())
               return true;

          if (grid2[row][col] == 0 || visited[row][col])
               return true;

          visited[row][col] = true;

          bool valid = true;

          if (grid1[row][col] == 0)
               valid = false;

          bool up = DFS(grid1, grid2, visited, row - 1, col);
          bool down = DFS(grid1, grid2, visited, row + 1, col);
          bool left = DFS(grid1, grid2, visited, row, col - 1);
          bool right = DFS(grid1, grid2, visited, row, col + 1);

          return valid && up && down && left && right;
     }

     int countSubIslands(vector<vector<int>> &grid1,
                         vector<vector<int>> &grid2)
     {
          int n = grid1.size();
          int m = grid1[0].size();

          vector<vector<bool>> visited(n, vector<bool>(m, false));

          int count = 0;

          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (grid2[i][j] == 1 && !visited[i][j])
                    {
                         if (DFS(grid1, grid2, visited, i, j))
                              count++;
                    }
               }
          }

          return count;
     }
};
int main()
{
     vector<vector<int>> grid1 = {
         {1, 1, 1, 0, 0},
         {0, 1, 1, 1, 1},
         {0, 0, 0, 0, 0},
         {1, 0, 0, 0, 0},
         {1, 1, 0, 1, 1}};

     vector<vector<int>> grid2 = {
         {1, 1, 1, 0, 0},
         {0, 0, 1, 1, 1},
         {0, 1, 0, 0, 0},
         {1, 0, 1, 1, 0},
         {0, 1, 0, 1, 0}};

     Solution s1;
     int result = s1.countSubIslands(grid1, grid2);

     cout << "There are '" << result << "' SubIslands " <<endl ; 
     return 0;
}