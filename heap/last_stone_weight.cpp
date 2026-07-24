#include <bits/stdc++.h>
using namespace std;
class Solution
{
     priority_queue<int> q;

public:
     int lastStoneWeight(vector<int> &arr)
     {
          if (arr.size() == 1)
          {
               return arr[0];
          }
          for (int i = 0; i < arr.size(); i++)
          {
               q.push(arr[i]);
          }

          while (q.size() >= 2)
          {
               int big = q.top();
               q.pop();

               int small = q.top();
               q.pop();

               int ans = big - small;

               if (ans == 0)
               {
                    continue;
               }
               else
               {
                    q.push(ans);
               }
          }
          if (q.size() == 0)
          {
               return 0;
          }
          else
          {
               return q.top();
          }
     }
};
int main()
{
     Solution s1;

     vector<int> stones = {10, 4, 2, 10, 7, 3};

     int ans = s1.lastStoneWeight(stones);

     cout << "The weight of the last remaining stone is: " << ans << endl;
     return 0;
}