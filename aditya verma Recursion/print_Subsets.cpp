#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
     vector<vector<int>> result;
     void insert(vector<int> &arr, vector<int> &ans, int i = 0)
     {
          if (i == arr.size())
          {
               result.push_back(ans);
               return;
          }
          ans.push_back(arr[i]);
          insert(arr, ans, i + 1);
          ans.pop_back();
          insert(arr, ans, i + 1);
     }
     vector<vector<int>> print_Subsets(vector<int> &arr)
     {
          vector<int> ans;
          insert(arr, ans);
          return result;
     }
};
int main()
{
     vector<int> arr = {1, 2, 3};
     Solution s1;
     vector<vector<int>> result = s1.print_Subsets(arr);

     cout << "[" <<endl ;
     for(auto x : result)
     {
          cout << "{" ;
          for(auto x2 : x)
          {
               cout << x2 << ","  ; 
          }
          cout << "}" <<endl ; 
     }
     cout << "]"; 
     return 0;
}