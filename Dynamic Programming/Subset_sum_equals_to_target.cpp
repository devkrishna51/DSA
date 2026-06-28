// Given an array of positive integers arr[]
// and a value sum, determine if there is a subset of arr[] with sum equal to given sum.

// Examples:

// Input: arr[] = [3, 34, 4, 12, 5, 2], sum = 9
// Output: true
// Explanation: Here there exists a subset with target sum = 9, 4+3+2 = 9.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
     // int ans = INT_MAX ;
     int solve(vector<int> &arr, int i, int currSum, int sum, vector<vector<int>> &dp)
     {

          if (i == arr.size())
               return currSum == sum;

          if (dp[i][currSum] != -1)
          {
               return dp[i][currSum];
          }

          bool take = 0;
          if (currSum + arr[i] <= sum)
               take = solve(arr, i + 1, currSum + arr[i], sum, dp);

          bool skip = solve(arr, i + 1, currSum, sum, dp);

          return dp[i][currSum] = take || skip;
     }

public:
     bool isSubsetSum(vector<int> &arr, int sum)
     {
          vector<vector<int>> dp(arr.size() + 1, vector<int>(sum + 1, -1));
          return solve(arr, 0, 0, sum, dp);
     }
};

int main()
{
     vector<int> arr = {3, 34, 4, 12, 5, 2};
     int sum = 9; 

     Solution s1 ;
     int result = s1.isSubsetSum(arr , sum) ; 
     cout << "Result is : " << result <<endl ; 
     return 0;
}