#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public : 
     int NmeetingsInOneroom(vector<int> start, vector<int> end)
     {
          vector<vector<int>> greedy;
          int n = start.size();
          for (int i = 0; i < n; i++)
          {
               greedy.push_back({end[i], start[i]});
          }
          sort(greedy.begin(), greedy.end());
          int count = 1;
          int lastEnd = greedy[0][0];
          for (int i = 1; i < n; i++)
          {
               if(greedy[i][1] > lastEnd)
               {
                    count++ ; 
                    lastEnd = greedy[i][0] ; 
               }
          }
          return count ; 
     }
};
int main()
{
     vector<int> start = {1, 3, 0, 5, 8, 5} ; 
     vector<int> end = {2, 4, 6, 7, 9, 9} ; 
     Solution s1 ; 
    int result =  s1.NmeetingsInOneroom(start ,end)  ;
    cout << result <<endl ; 
     return 0;
}