// Word Break
// Given a string s and a dictionary of strings wordDict,
//  return true if s can be segmented into a space-separated sequence of one or more
// dictionary words.

// Note that the same word in the dictionary may be reused multiple times in the segmentation.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
     unordered_set<string> us;
     bool solve(string s, int idx, vector<int> &dp)
     {
          if (idx >= s.size())
          {
               return true;
          }
          if (dp[idx] != -1)
          {
               return dp[idx];
          }
          for (int j = 1; j <= s.size(); j++)
          {
               string temp = s.substr(idx, j);
               if (us.count(temp) && solve(s, idx + j, dp))
               {
                    return dp[idx] = true;
               }
          }
          return dp[idx] = false;
     }

public:
     bool wordBreak(string s, vector<string> &wordDict)
     {
          for (auto x : wordDict)
          {
               us.insert(x);
          }
          vector<int> dp(s.size() + 1, -1);
          return solve(s, 0, dp);
     }
};
int main()
{
     string str = "applepenapple";
     vector<string> wordDict = {"apple","pen"};

     Solution s1 ;
     bool result = s1.wordBreak(str , wordDict) ; 

     if(result)
          cout << "All subsets are present in string " <<endl  ; 
     else
          cout << " Subsets are not present in String  " <<endl ; 
     
     return 0;
}