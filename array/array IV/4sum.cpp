#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
     vector<vector<int>> fourSum(vector<int> &nums, int target)
     {
          vector<vector<int>> ans;
          sort(nums.begin(), nums.end());
          int n = nums.size();
          for (int i = 0; i < n - 3; i++)
          {
               if (i > 0 && nums[i] == nums[i - 1])
               {
                    continue;
               }
               for (int j = i + 1; j < n - 2; j++)
               {
                    if (j > i + 1 && nums[j] == nums[j - 1])
                    {
                         continue;
                    }
                    int p = j + 1, q = n - 1;
                    while (p < q)
                    {
                         int sum = nums[i] + nums[j] + nums[p] + nums[q];
                         if (sum == target)
                         {
                              ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                              while (p < q && nums[p] == nums[p + 1])
                              {
                                   p++;
                              }
                              while (p < q && nums[q] == nums[q - 1])
                              {
                                   q--;
                              }

                              p++;
                              q--;
                         }
                         else if (sum > target)
                         {
                              q--;
                         }
                         else if (sum < target)
                         {
                              p++;
                         }
                    }
               }
          }
          return ans;
     }
};
int main()
{
     vector<int> arr = {1, 0, -1, 0, -2, 2};
     int n = arr.size();
     Solution s1 ; 
     vector<vector<int>> result  = s1.fourSum(arr , 0) ; 
     for(auto x : result)
     {
          for(auto j : x)
          {
               cout << j << " " ; 
          }
          cout <<endl ; 

     }

     return 0;

}