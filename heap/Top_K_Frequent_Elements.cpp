#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> topKFrequent(vector<int> &nums, int k)
     {
          unordered_map<int, int> mp;
          for (int i = 0; i < nums.size(); i++)
          {
               mp[nums[i]]++;
          }
          priority_queue<pair<int, int>> q;
          for (auto it : mp)
          {
               q.push({it.second, it.first});
          }
          int time = k;
          vector<int> result;
          while (time > 0)
          {
               result.push_back(q.top().second);
               q.pop();
               time--;
          }
          return result;
     }
};
int main()
{
     Solution s1;

     vector<int> nums = {1, 1, 1, 2, 2, 3};

     int k = 2;

     vector<int> ans = s1.topKFrequent(nums, k);

     cout << "The " << k << " most frequent elements are: ";

     for (int num : ans)
     {
          cout << num << " ";
     }

     cout << endl;
     return 0;
}