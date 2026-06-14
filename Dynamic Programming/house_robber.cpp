// You are a professional robber planning to rob houses along a street. Each house has a
// certain amount of money stashed, the only constraint
//  stopping you from robbing each of them is that
//  adjacent houses have security systems connected
//   and it will automatically contact the police if two
//   adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
     int solve(vector<int> &arr, int i, vector<int> &dp)
     {
          if (i >= arr.size())
          {
               return 0;
          }
          if (dp[i] != -1)
          {
               return dp[i];
          }
          int chura = arr[i] + solve(arr, i + 2, dp);
          int chorde = solve(arr, i + 1, dp);

          return dp[i] = max(chura, chorde);
     }

public:
     int rob(vector<int> &arr)
     {
          int n = arr.size();
          vector<int> dp(n + 2, -1);
          return solve(arr, 0, dp);
     }
};
int main()
{
     vector<int> arr = {2, 7, 9, 3, 1};
     Solution s1;
     int result = s1.rob(arr);
     cout << "the Maximum amount is :  " << result;
     return 0;
}