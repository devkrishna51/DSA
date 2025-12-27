#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public : 
     int findContentChildren(vector<int> &g, vector<int> &s)
     {
          sort(g.begin() , g.end()) ; 
          sort(s.begin() , s.end()) ; 
          int i = 0, j = 0, count = 0;
          while (i < g.size() && j < s.size())
          {
               if (s[j] >= g[i])
               {
                    count++;
                    i++;
                    j++;
               }
               else
               {
                    j++;
               }
          }
          return count;
     }
};
int main()
{
     vector<int> g = {10, 9, 8, 7, 10, 9, 8, 7};
     vector<int> s = {10, 9, 8, 7};
     Solution s1 ; 
     
     int result = s1.findContentChildren(g ,s) ; 
     cout << "The maximamu children are happy = " << result <<endl ; 
     return 0;
}