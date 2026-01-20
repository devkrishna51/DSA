#include <iostream>
#include <vector>
using namespace std;
class Solution
{
     vector<vector<int>> result;

     void findCombination(vector<int> &arr, vector<int> &combi, int target, int i = 0)
     {
          if (target == 0)
          {
               result.push_back(combi);
               return;
          }
          if (i == arr.size() || target < 0)
               return;

          combi.push_back(arr[i]);
          findCombination(arr, combi, target - arr[i], i);

          combi.pop_back();
          findCombination(arr, combi, target, i + 1);
     }

public:
     vector<vector<int>> Combination(vector<int> &arr, int target)
     {
          vector<int> ans;
          findCombination(arr, ans, target);
          return result;
     }
};
int main()
{
     vector<int> arr = {2, 3, 6, 7};
     int target = 7;

     Solution s1;
     vector<vector<int>> result = s1.Combination(arr, target);

     for (auto x : result)
     {
          cout << "[" ;
          for (auto x2 : x)
          {
               cout << x2 << " ";
          }
          cout << "]" ; 
          cout << endl;
     }

   
     return 0;
}