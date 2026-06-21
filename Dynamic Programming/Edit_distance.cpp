// Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

// You have the following three operations permitted on a word:

// Insert a character
// Delete a character
// Replace a character
#include <bits/stdc++.h>
using namespace std;
class Solution
{
     int solve(int idx1, string &str1, int idx2, string &str2, int m, int n,
               vector<vector<int>> &dp)
     {

          if (idx1 == m)
          {
               return n - idx2;
          }
          if (idx2 == n)
          {
               return m - idx1;
          }
          if (dp[idx1][idx2] != -1)
          {
               return dp[idx1][idx2];
          }
          if (str1[idx1] == str2[idx2])
          {
               return solve(idx1 + 1, str1, idx2 + 1, str2, m, n, dp);
          }

          int insert = 1 + solve(idx1, str1, idx2 + 1, str2, m, n, dp); // insert
          int deletion = 1 + solve(idx1 + 1, str1, idx2, str2, m, n, dp); // delete
          int replace = \1 + solve(idx1 + 1, str1, idx2 + 1, str2, m, n, dp); // replace

          return dp[idx1][idx2] = min({insert, deletion, replace});
     }

public:
     int minDistance(string str1, string str2)
     {

          int m = str1.size();
          int n = str2.size();
          vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
          return solve(0, str1, 0, str2, m, n, dp);
     }
};
int main()
{
     string str1 = "horse";
     string str2 = "ros";

     Solution s1;
     int result = s1.minDistance(str1, str2);
     cout << "Minimum No of operation : " << result << endl;
     return 0;
}