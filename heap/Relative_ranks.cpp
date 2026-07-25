#include <bits/stdc++.h>
using namespace std;

class Solution
{
     priority_queue<pair<int, int>> q;

public:
     vector<string> findRelativeRanks(vector<int> &score)
     {
          int n = score.size();
          vector<string> ans(n);
          for (int i = 0; i < n; i++)
          {
               q.push({score[i], i});
          }
          int count = 1;
          for (int i = 0; i < n; i++)
          {
               pair<int, int> p = q.top();
               int idx = p.second ; 
               q.pop();
               if (count == 1)
               {
                    ans[idx] = "Gold Medal";
                    count++;
                    continue;
               }
               else if (count == 2)
               {
                    ans[idx] = "Silver Medal";
                    count++;
                    continue;
               }
               else if (count == 3)
               {
                    ans[idx] = "Bronze Medal";
                    count++;
                    continue;
               }
               ans[idx] = to_string(count);
               count++;
          }
          return ans;
     }
};

int main()
{
     Solution s1;

     vector<int> score = {5, 4, 3, 2, 1};

     vector<string> ans = s1.findRelativeRanks(score);

     cout << "The relative ranks are:" << endl;

     for (string rank : ans)
     {
          cout << rank << " ";
     }

     cout << endl;
     return 0;
}