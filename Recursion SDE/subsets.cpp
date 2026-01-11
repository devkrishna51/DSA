#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
     vector<vector<int>> result;
     void printSubsets(vector<int> &arr, int i, vector<int> &ans)
     {
          if (i == arr.size())
          {
               result.push_back(ans);
               return;
          }
          ans.push_back(arr[i]);
          printSubsets(arr, i + 1, ans);
          ans.pop_back();
          printSubsets(arr, i + 1, ans);
     }
     vector<vector<int>> subsets(vector<int> &arr)
     {
          vector<int> ans;
          printSubsets(arr, 0, ans);
          return result;
     }
};

int main()
{
     vector<int> arr = {1, 2, 3};
     Solution s1;
     vector<vector<int>> res = s1.subsets(arr);
     for (auto x : res)
     {
          for (auto x2 : x)
          {
               cout << x2 << " ";
          }
          cout << endl;
     }
     return 0;
}