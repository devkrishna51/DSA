// Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".
// A common subsequence of two strings is a subsequence that is common to both strings.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
     int solve(string &str, string &str2, int i, int j, vector<vector<int>> &dp)
     {

          if (i == str.size() || j == str2.size())
          {
               return 0;
          }
          if (dp[i][j] != -1)
          {
               return dp[i][j];
          }
          if (str[i] == str2[j])
          {
               return dp[i][j] = 1 + solve(str, str2, i + 1, j + 1, dp);
          }
          return dp[i][j] = max(
                     solve(str, str2, i + 1, j, dp),
                     solve(str, str2, i, j + 1, dp));
     }

public:
     int longestCommonSubsequence(string text1, string text2)
     {
          int n = text1.size();
          int n2 = text2.size();
          vector<vector<int>> dp(n + 1, vector<int>(n2 + 1, -1));
          return solve(text1, text2, 0, 0, dp);
     }
};
int main()
{
     string text1 = "abcde", text2 = "ace";
     Solution s1;
     int result = s1.longestCommonSubsequence(text1, text2);
     cout << result ; 
     return 0;
} //he