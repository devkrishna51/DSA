#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
     // D L R U
     int drow[4] = {1, 0, 0, -1};
     int dcol[4] = {0, -1, 1, 0};

     bool isSafe(int row, int col, vector<vector<int>> &b, int n)
     {
          if (row >= 0 && col >= 0 && row < n && col < n && b[row][col] == 1)
          {
               return true;
          }
          return false;
     }
     char alpha(int i)
     {
          switch (i)
          {
          case 0:
               return 'D';
          case 1:
               return 'L';
          case 2:
               return 'R';
          case 3:
               return 'U';
          }
     }
     void solve(vector<vector<int>> &b, string s, int row, int col, vector<string> &ans)
     {
          if (row == b.size() - 1 && col == b[0].size() - 1)
          {
               ans.push_back(s);
               return;
          }
          b[row][col] = 0 ; 
          for (int i = 0; i < 4; i++)
          {
               int r = row + drow[i];
               int c = col + dcol[i];

               if (isSafe(r, c, b, b.size()))

               {
                    solve(b, s + alpha(i), r, c, ans);
               }
          }
          b[row][col] = 1;
     }

public:
     vector<string> generate(vector<vector<int>> &b)
     {
          string s = "";
          vector<string> ans;
          solve(b, s, 0, 0, ans);
          return ans;
     }
};
int main()
{
     vector<vector<int>> maze =
         {
             {1, 0, 0, 0},
             {1, 1, 0, 1},
             {1, 1, 0, 0},
             {0, 1, 1, 1}};

     Solution s1;
     vector<string> result = s1.generate(maze);
     for (auto x : result)
     {
          cout << x << endl;
     }
     return 0;
}