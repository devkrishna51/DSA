// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place
// are arranged in a circle. That means the first house is the neighbor of the last
//  one. Meanwhile, adjacent houses have a security system connected, and it will
//  automatically contact the police if two adjacent houses were broken into on the
//   same night.

// Given an integer array nums representing the amount of money of each house,
// return the maximum amount of money you can rob tonight without alerting the police.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
     int solve(vector<int> &arr, int i, int end, vector<int> &dp)
     {
          if (i > end)
          {
               return 0;
          }
          if (dp[i] != -1)
          {
               return dp[i];
          }

          int add = arr[i] + solve(arr, i + 2, end, dp);
          int single = solve(arr, i + 1, end, dp);

          return dp[i] = max(add, single);
     }

public:
     int rob(vector<int> &nums)
     {

          int n = nums.size();
          if (n == 1)
          {
               return nums[0];
          }
          vector<int> dp(n + 2, -1);
          vector<int> dp2(n + 2, -1);
          int case1 = solve(nums, 0, n - 2, dp);
          int case2 = solve(nums, 1, n - 1, dp2);

          return max(case1, case2);
     }
};
int main()
{
     vector<int> arr = {1, 2, 3, 1};
     Solution s1;
     int result = s1.rob(arr);
     cout << result;
     return 0;
}