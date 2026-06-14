// Given an integer array nums, return the length of the longest strictly increasing subsequence.


#include<bits/stdc++.h>
using namespace std ; 
class Solution {

map<pair<int, int> , int> dp ; 

int solve(int idx , int prev_idx , vector<int>& arr , vector<vector<int>> &dp)
{
    if(idx == arr.size())
    {
        return 0 ; 
    }
    if(dp[idx][prev_idx +1] != -1)
    {
        return dp[idx][prev_idx+1] ; 
    } 
    
    int pick = 0 ; 
    int notPick = 0 ; 
    if(prev_idx == -1 || arr[prev_idx] < arr[idx])
    {
         pick = 1+solve(idx+1 , idx , arr , dp)  ; 
    }

    notPick = solve(idx + 1 , prev_idx , arr ,dp) ; 
    return dp[idx][prev_idx + 1] = max(pick, notPick);
}
public:
    int lengthOfLIS(vector<int>& arr) {
        
        int n = arr.size() ; 
    
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        return solve(0,-1,arr , dp); 
    }
};
int main()
{
     vector<int> arr = {10,9,2,5,3,7,101,18} ; 
     Solution s1 ; 
     int result = s1.lengthOfLIS(arr) ; 
     cout << result ; 
     return 0 ; 
}