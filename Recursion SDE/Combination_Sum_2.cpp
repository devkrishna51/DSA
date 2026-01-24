#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
     vector<vector<int>> result;
     void solve(vector<int> &arr, vector<int> curr, int target, int i = 0)
     {
          if (target == 0)
          {
               result.push_back(curr);
               return;
          }
          if (i >= arr.size() || target < 0)
          {
               return;
          }
          curr.push_back(arr[i]);
          solve(arr, curr, target - arr[i], i + 1);
          curr.pop_back();
          int idx = i + 1;
          while (idx < arr.size() && arr[idx] == arr[idx - 1])
          {
               idx++;
          }
          solve(arr, curr, target, idx);
     }

public:
     vector<vector<int>> getAllComb(vector<int> &arr, int target)
     {
          vector<int> curr;
          solve(arr, curr, target);
          return result ; 
     }
};
int main()
{
     vector<int> arr ={10,1,2,7,6,1,5} ; 
     int target = 8 ; 
     Solution s1 ; 
     vector<vector<int>> resu = s1.getAllComb(arr ,target) ; 

     for(auto x : resu)
     {
          for(auto x2 : x)
          {
               cout << x2 << " " ; 
          }
          cout << endl ;
     }
     return 0;
}