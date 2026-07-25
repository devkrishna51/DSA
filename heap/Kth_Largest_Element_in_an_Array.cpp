#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int findKthLargest(vector<int> &nums, int k)
     {
          priority_queue<int> q(nums.begin(), nums.end());

          int time = k;
          int ans = 0;
          while (time > 0)
          {
               ans = q.top();
               q.pop();
               time--;
          }
          return ans;
     }
};
int main()
{
     Solution s1;

     vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};

     int k = 4;

     int ans = s1.findKthLargest(nums, k);

     cout << "The " << k << "th largest element in the array is: " << ans << endl;
     return 0;
}