#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool checkOne(vector<vector<int>> &mat, int row, int col, vector<vector<int>> &distance)
     {

          int n = mat.size();
          int m = mat[0].size();

          if (row >= n || col >= m || row < 0 || col < 0)
               return false;

          if (mat[row][col] == 1 && distance[row][col] == -1)
          {
               return true;
          }
          return false;
     }

public:
     vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
     {

          int n = mat.size();
          int m = mat[0].size();

          queue<pair<int, int>> q;
          vector<vector<int>> distance(n, vector<int>(m, -1));
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (mat[i][j] == 0)
                    {
                         distance[i][j] = 0;
                         q.push({i, j});
                    }
               }
          }
          while (!q.empty())
          {
               pair<int, int> p = q.front();
               q.pop();
               int row = p.first;
               int col = p.second;

               if (checkOne(mat, row + 1, col, distance))
               {
                    distance[row + 1][col] = distance[row][col] + 1;
                    q.push({row + 1, col});
               }
               if (checkOne(mat, row - 1, col, distance))
               {
                    distance[row - 1][col] = distance[row][col] + 1;
                    q.push({row - 1, col});
               }
               if (checkOne(mat, row, col + 1, distance))
               {
                    distance[row][col + 1] = distance[row][col] + 1;
                    q.push({row, col + 1});
               }
               if (checkOne(mat, row, col - 1, distance))
               {
                    distance[row][col - 1] = distance[row][col] + 1;
                    q.push({row, col - 1});
               }
          }
          return distance;
     }
};
int main()
{
     vector<vector<int>> mat = {
         {0, 0, 0},
         {0, 1, 0},
         {1, 1, 1}};

     Solution s1 ; 
     vector<vector<int>> result = s1.updateMatrix(mat) ; 

     cout<< "Result is  : "  <<endl; 

     for(auto i : result)
     {
          for(auto j : i)
          {
               cout << j << " " ; 
          }
          cout << endl ; 
     }
     return 0;
}