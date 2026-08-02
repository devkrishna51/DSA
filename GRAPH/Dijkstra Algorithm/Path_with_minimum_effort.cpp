#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool isValid(int row, int col, int n, int m)
     {
          if (row >= n || col >= m || row < 0 || col < 0)
          {
               return false;
          }
          return true;
     }

public:
     int minimumEffortPath(vector<vector<int>> &heights)
     {
          int n = heights.size();
          int m = heights[0].size();
          vector<vector<int>> efforts(n, vector<int>(m, INT_MAX));
          priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
          q.push({0, {0, 0}});
          efforts[0][0] = 0;
          while (!q.empty())
          {
               pair<int,pair<int,int>> p  = q.top();
               int effort = p.first ; 
               int row = p.second.first ; 
               int col = p.second.second ; 
               q.pop();
               if (effort > efforts[row][col])
               {
                    continue;
               }
               if (isValid(row - 1, col, n, m))
               {
                    int currEffort = abs(heights[row][col] - heights[row - 1][col]);
                    int newEffort = max(effort, currEffort);

                    if (newEffort < efforts[row - 1][col])
                    {
                         efforts[row - 1][col] = newEffort;
                         q.push({newEffort, {row - 1, col}});
                    }
               }
               if (isValid(row + 1, col, n, m))
               {
                    int currEffort = abs(heights[row][col] - heights[row + 1][col]);
                    int newEffort = max(effort, currEffort);

                    if (newEffort < efforts[row + 1][col])
                    {
                         efforts[row + 1][col] = newEffort;
                         q.push({newEffort, {row + 1, col}});
                    }
               }
               if (isValid(row, col - 1, n, m))
               {
                    int currEffort = abs(heights[row][col] - heights[row][col - 1]);
                    int newEffort = max(effort, currEffort);

                    if (newEffort < efforts[row][col - 1])
                    {
                         efforts[row][col - 1] = newEffort;
                         q.push({newEffort, {row, col - 1}});
                    }
               }
               if (isValid(row, col + 1, n, m))
               {
                    int currEffort = abs(heights[row][col] - heights[row][col + 1]);
                    int newEffort = max(effort, currEffort);

                    if (newEffort < efforts[row][col + 1])
                    {
                         efforts[row][col + 1] = newEffort;
                         q.push({newEffort, {row, col + 1}});
                    }
               }
          }
          return efforts[n - 1][m - 1];
     }
};
int main()
{
     Solution s1;

     vector<vector<int>> heights = {
         {1, 2, 3},
         {3, 8, 4},
         {5, 3, 5}};

     int ans = s1.minimumEffortPath(heights);

     cout << "The minimum effort required to travel from the top-left cell to the bottom-right cell is: "
          << ans << endl;
     return 0;
}