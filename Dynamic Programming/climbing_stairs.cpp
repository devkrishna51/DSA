// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

#include<bits/stdc++.h>
using namespace std ; 

class Solution {
    int solve(int n , vector<int> &dp)
    {
        if(n <= 1)
        {
            return 1 ; 
        }
        if(dp[n] != -1)
        {
            return dp[n] ; 
        }
        int left = solve(n-1 ,dp) ; 
        int right = solve(n-2 ,dp) ; 

        return dp[n] = left + right ; 
    }
public:
    int climbStairs(int n) {
            vector<int> dp(n+1,-1) ; 

        return solve(n ,dp) ; 
    }
};
int main()
{
    int n ; 
    cout << "Enter the no of stairs :  "  ; 
    cin >> n ;  
     Solution s1 ; 
     int result = s1.climbStairs(n) ; 
     cout << "There are ways to climb " << result << endl ;
     return 0 ; 
}