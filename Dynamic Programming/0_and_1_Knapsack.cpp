#include<bits/stdc++.h>
using namespace std ; 
class Solution {
    int solve(int W, vector<int> &val, vector<int> &wt , int i , vector<vector<int>> &dp)
    {
        if(i >= val.size() || W == 0)
        {
            return 0 ; 
        }
        if(dp[i][W] != -1)
        {
            return dp[i][W] ;
        }
        int take = 0 ; 
        if(wt[i] <= W)
        {
            take =val[i] + solve(W-wt[i] , val , wt , i+1 ,dp) ;
        }
        int skip = solve(W , val , wt , i+1 ,dp) ; 
        
        return dp[i][W] = max(take , skip) ; 
    }
      public:

    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        vector<vector<int>> dp (val.size()+1 , vector<int> (W+1 ,-1)) ;
        return solve(W , val , wt , 0 ,dp) ; 
        
           
    }
};
int main(){
     vector<int> val = {10, 40, 30, 50} ; 
     vector<int> wt = {5, 4, 2, 3} ; 

     int W = 5 ; 
     Solution s1 ; 
     int result = s1.knapsack(W , val , wt) ; 

     cout << "The result is : " << result ; 
     return 0 ; 
}