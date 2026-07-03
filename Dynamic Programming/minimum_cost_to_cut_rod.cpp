#include<bits/stdc++.h>
using namespace std ; 
class Solution {
    int solve(vector<int>& cuts , int l , int r , vector<vector<int>> &dp)
    {
        if(r-l < 2)
        {
            return 0 ; 
        }
        if(dp[l][r] != -1)
        {
            return dp[l][r] ; 
        }
        int ans = INT_MAX ; 
        for(int i = l+1 ; i <r; i++)
        {
            int cost = (cuts[r] - cuts[l]) + solve(cuts , l , i,dp) + solve(cuts , i , r,dp) ; 

            ans = min(ans , cost) ; 
        }
        return dp[l][r] = ans ; 
    }
public:
    int minCost(int n, vector<int>& cuts) {
        vector<vector<int>> dp(cuts.size()+2 , vector<int>(cuts.size()+2 , -1)) ; 
            sort(cuts.begin() , cuts.end()) ; 
            cuts.insert(begin(cuts) , 0) ; 
            cuts.push_back(n) ; 
            return solve(cuts , 0 , cuts.size()-1 , dp) ; 
      }
};
int main()
{
     vector<int> cuts = {13,25,16,20,26,5,27,8,23,14,6,15,21,24,29,1,19,9,3} ; 
     int  n = 30 ;
     Solution s1 ;

     int result = s1.minCost(n , cuts) ; 

     cout << "Minimum Cost to Cut a Stick :  " << result << endl <<endl ;
     return 0 ; 

}