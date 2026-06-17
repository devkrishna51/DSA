#include<bits/stdc++.h>
using namespace std ; 
class Solution {
    int solve(vector<int>& arr  ,int prev , int i ,vector<vector<int>> &dp)
    {
       
       if(i >= arr.size())
       {
           return 0 ; 
       }
       if(dp[i][prev+1] != -1)
       {
           return dp[i][prev+1] ; 
       }

      int skip = solve(arr , prev , i+1 ,dp) ; 
      
      int take = 0 ; 
       if(prev == -1 || arr[i] > arr[prev])
       {
          take = arr[i]  + solve(arr , i , i+1 ,dp) ; 
       }
      
       return dp[i][prev+1] = max(skip , take) ; 
    }
  public:
    int maxSumIS(vector<int>& arr) {
        // code here
        int n = arr.size() ; 
        vector<vector<int>> dp (n +1 , vector<int> (n , -1))  ; 
        return solve(arr , -1 , 0 ,dp) ;
    }
};
int main(){

     vector<int> arr = {1, 101, 2, 3, 100} ; 
     
     Solution s1 ; 
     int result = s1.maxSumIS(arr) ; 

     cout <<"Max Sum Increasing Subsequence : " <<result << endl; 
     return 0 ; 
}