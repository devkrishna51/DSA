// Palindrome Partitioning

// Given a string s, partition s such that every substring of the
//  partition is a palindrome. Return all possible palindrome
//  partitioning of s.
// Example 1:

// Input: s = "aab"
// Output: [["a","a","b"],["aa","b"]]
#include <bits/stdc++.h>
using namespace std;
class Solution
{
     vector<vector<string>> result;
     bool isPalin(string &s)
     {
          int l = 0, r = s.size() - 1;
          while (l < r)
          {
               if (s[l] == s[r])
               {
                    l++;
                    r--;
               }
               else
               {
                    return false;
               }
          }
          return true;
     }
     void solve(string s, vector<string> &ans)
     {
          if (s.size() == 0)
          {
               result.push_back({ans});
               return;
          }

          for (int i = 0; i < s.size(); i++)
          {
               string temp = s.substr(0, i + 1);

               if (isPalin(temp))
               {
                    ans.push_back(temp);
                    solve(s.substr(i + 1), ans);
                    ans.pop_back();
               }
          }
     }

public:
     vector<vector<string>> partition(string s)
     {
          vector<string> ans;
          solve(s, ans);
          return result;
     }
};
int main()
{
     string s = "aab";
     Solution s1 ; 
     vector<vector<string>> result = s1.partition(s) ; 

     for(auto x : result)
     {
          cout << "[" ; 
          for(auto x2 :x)
          {
               cout << x2 <<" "  ;
          }
          cout << "]" << endl ; 
     }
     return 0;
}
