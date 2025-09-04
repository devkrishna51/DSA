#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution
{
public:
     int longestConsecutive(vector<int> &nums)
     {

          if (nums.empty())
               return 0;

          unordered_set<int> s(nums.begin(), nums.end());
          int longest = 0;

          for (int x : s)
          {
               if (!s.count(x - 1))
               {
                    int cur = x;
                    int len = 1;
                    while (s.count(cur + 1))
                    {
                         cur++;
                         len++;
                    }
                    longest = max(longest, len);
               }
          }
          return longest;
     }
};
int main()
{
     vector<int> arr = {100, 4, 200, 1, 3, 2};

     Solution s1;
     int result = s1.longestConsecutive(arr);
     cout << "Longest Consecutive : " << result;
     return 0;
}