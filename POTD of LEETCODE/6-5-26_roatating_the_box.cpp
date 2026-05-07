#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
     vector<vector<char>> findTheRotation(vector<vector<char>> &mat)
     {
          int row = mat.size();
          int col = mat[0].size();

          vector<vector<char>> arr(col, vector<char>(row));
          for (int i = 0; i < row; i++)
          {
               for (int j = 0; j < col; j++)
               {
                    arr[j][i] = mat[i][j];
               }
          }

          for (auto x : arr)
          {
               for (auto x2 : x)
               {
                    cout << x2 << " ";
               }
               cout << endl;
          }
          int row2 = arr.size();
          int col2 = arr[0].size();

          for (int j = 0; j < col2; j++)
          {
               for (int i = row2 - 1; i >= 0; i--)
               {
                    if (arr[i][j] == '.')
                    {
                         int stoneRow = -1;
                         for (int k = i - 1; k >= 0; k--)
                         {
                              if (arr[k][j] == '*')
                                   break;

                              else if (arr[k][j] == '#')
                              {
                                   stoneRow = k;
                                   break;
                              }
                         }
                         if (stoneRow != -1)
                         {
                              arr[i][j] = '#';
                              arr[stoneRow][j] = '.';
                         }
                    }
               }
          }
          return arr;
     }
};
int main()
{
     vector<vector<char>> mat = {
         {'#', '.', '*', '.'},
         {'#', '#', '*', '.'}};

     Solution s1;

     vector<vector<char>> arr = s1.findTheRotation(mat);
     cout << "\n\nchanged from here <" << endl;
     for (auto x : arr)
     {
          for (auto x2 : x)
          {
               cout << x2 << " ";
          }
          cout << endl;
     }
     return 0;
}