// You are given an integer array coins representing
// coins of different denominations and an integer amount
//  representing a total amount of money.

// Return the number of combinations that make up that amount.
// If that amount of money cannot be made up by any combination of the coins, return 0.

// You may assume that you have an infinite number of each kind of coin.

// The final answer is guaranteed to fit into a signed 32-bit integer.

#include <bits/stdc++.h>
using namespace std;
class Solution
{

     int solve(vector<int> &arr, int amount, int index, vector<vector<int>> &dp)
     {
          if (amount == 0)
          {

               return 1;
          }
          if (amount < 0)
          {
               return 0;
          }
          if (dp[index][amount] != -1)
          {
               return dp[index][amount];
          }
          int count = 0;
          for (int i = index; i < arr.size(); i++)
          {
               count += solve(arr, amount - arr[i], i, dp);
          }
          return dp[index][amount] = count;
     }

public:
     int change(int amount, vector<int> &coins)
     {
          vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));
          return solve(coins, amount, 0, dp);
     }
};
int main()
{
     vector<int> arr = {1,2,5} ; 
     int amount = 5 ; 
     Solution s1; 
     int result = s1.change(amount , arr) ; 

     cout << "The Number of Ways are : " << result << endl ;   
     return 0;
}