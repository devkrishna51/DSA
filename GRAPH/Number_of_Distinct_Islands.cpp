// Given a grid grid[][] of size n × m, consisting of characters 'L' and 'W', where 'L'
// represents Land and 'W' represents Water, find the number of distinct islands in the grid.
// An island is a group of one or more land cells connected horizontally or vertically.

// Two islands are considered distinct if their shapes are different.
// Two islands have the same shape if one can be translated to match the other exactly.
//  Rotation and reflection are not allowed.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
     void DFS(vector<vector<char>> &grid, vector<vector<bool>> &visited, vector<pair<int, int>> &shape, int row, int col, int baseRow, int baseCol)
     {
          if (row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0)
          {
               return;
          }
          if (visited[row][col] != false)
          {
               return;
          }
          if (grid[row][col] == 'W')
          {
               return;
          }
          visited[row][col] = true;
          shape.push_back({row - baseRow, col - baseCol});

          DFS(grid, visited, shape, row + 1, col, baseRow, baseCol);
          DFS(grid, visited, shape, row - 1, col, baseRow, baseCol);
          DFS(grid, visited, shape, row, col + 1, baseRow, baseCol);
          DFS(grid, visited, shape, row, col - 1, baseRow, baseCol);
     }

public:
     int countDistinctIslands(vector<vector<char>> &grid)
     {
          // code here
          int n = grid.size();
          int m = grid[0].size();
          vector<vector<bool>> visited(n, vector<bool>(m, false));
          set<vector<pair<int, int>>> st;

          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (grid[i][j] == 'L' && visited[i][j] == false)
                    {
                         vector<pair<int, int>> shape;
                         DFS(grid, visited, shape, i, j, i, j);
                         st.insert(shape);
                    }
               }
          }

          return st.size();
     }
};

int main()
{

     vector<vector<char>> grid = {
         {'L', 'L', 'W', 'W', 'W'},
         {'L', 'W', 'W', 'L', 'L'},
         {'W', 'W', 'W', 'L', 'W'},
         {'W', 'L', 'L', 'W', 'W'},
         {'W', 'L', 'W', 'W', 'W'}};

     Solution s1;
     int result = s1.countDistinctIslands(grid);

     cout << "There are '" << result << "' Distinct Island in the grid " ; 
     return 0;
}