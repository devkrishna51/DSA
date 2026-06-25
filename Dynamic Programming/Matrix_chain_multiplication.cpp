// Given an array arr[] which represents the dimensions of a sequence of 
// matrices where the ith matrix has the dimensions 
// (arr[i-1] x arr[i]) for i>=1, find the most efficient way to multiply 
// these matrices together. The efficient way is the one that involves the least 
// number of multiplications.


#include <bits/stdc++.h>
using namespace std;
class Solution
{
     int solve(vector<int> &arr, int i, int j, vector<vector<int>> &dp)
     {
          if (i >= j)
          {
               return 0;
          }
          if (dp[i][j] != -1)
          {
               return dp[i][j];
          }
          int minAns = INT_MAX;
          for (int k = i; k < j; k++)
          {
               int temp = solve(arr, i, k, dp) + solve(arr, k + 1, j, dp) + (arr[i - 1] * arr[k] * arr[j]);
               minAns = min(temp, minAns);
          }
          return dp[i][j] = minAns;
     }

public:
     int matrixMultiplication(vector<int> &arr)
     {
          // code here
          int n = arr.size();
          vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
          return solve(arr, 1, n - 1, dp);
     }
};
int main()
{
     vector<int> arr = {1, 2, 3, 4, 3} ;
     
     Solution s1 ; 
     int result = s1.matrixMultiplication(arr) ; 
     cout << "\nThe minimum multiplication ans is : " << result << endl  <<endl ; 
     return 0;
}