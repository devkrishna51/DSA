// You are given an integer array coins representing coins of
// different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. 
// If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin
#include <bits/stdc++.h>
using namespace std;
class Solution
{
     int solve(vector<int> &arr, int amount, vector<int> &dp)
     {
          if (amount == 0)
          {
               return 0;
          }
          if (amount < 0)
          {
               return INT_MAX;
          }
          if (dp[amount] != -1)
          {
               return dp[amount];
          }
          int ans = INT_MAX;
          for (auto x : arr)
          {
               int res = solve(arr, amount - x, dp);

               if (res != INT_MAX)
               {
                    ans = min(ans, res + 1);
               }
          }
          return dp[amount] = ans;
     }

public:
     int coinChange(vector<int> &coins, int amount)
     {
          vector<int> dp(amount + 1, -1);
          int ans = solve(coins, amount, dp);

          if (ans == INT_MAX)
               return -1;
          else
               return ans;
     }
};
int main()
{
     vector<int> arr = {1,2,5} ; 
     int amount = 11 ; 
     Solution s1 ; 
     int result = s1.coinChange(arr , amount) ; 
     cout << "Minimum coin required to make amount : " << amount << "  coins : " << result ;  
     return 0;
}