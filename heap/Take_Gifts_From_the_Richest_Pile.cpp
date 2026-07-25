#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     long long pickGifts(vector<int> &gifts, int k)
     {
          priority_queue<int> q(gifts.begin(), gifts.end());

          int time = k;
          while (time > 0)
          {
               int temp = q.top();
               q.pop();
               int sq = sqrt(temp);
               q.push(sq);
               time--;
          }
          long long ans = 0;
          while (!q.empty())
          {
               int ele = q.top();
               q.pop();
               ans += ele;
          }
          return ans;
     }
};
int main()
{
     Solution s1;

     vector<int> gifts = {25, 64, 9, 4, 100};

     int k = 4;

     long long ans = s1.pickGifts(gifts, k);

     cout << "The total number of gifts remaining after " << k
          << " operations is: " << ans << endl;
     return 0;
}