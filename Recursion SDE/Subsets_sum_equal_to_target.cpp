#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
     bool flag = false;
     void insert(vector<int> &arr, vector<int> &ans, int target, int i = 0)
     {
          if (i == arr.size())
          {
               int sum = 0;
               for (int &x : ans)
               {
                    sum += x;
               }
               if (sum == target)
               {
                    flag = true;
                    return;
               }
               return;
          }
          ans.push_back(arr[i]);
          insert(arr, ans, target, i + 1);
          ans.pop_back();
          insert(arr, ans, target, i + 1);
     }

public:
     bool isSubsetSum(vector<int> &arr, int target)
     {
          vector<int> ans;
          insert(arr, ans, target);
          return flag ; 
     }
};
int main()
{
     vector<int> arr = {1, 2, 7, 3};
     int target = 6;
     Solution s1;
     bool result = s1.isSubsetSum(arr, target);

     if(result)
     {
          cout << "Subsets Exist" ;
     }
     else{
          cout << "Subsets not Exist" ; 
     }
     return 0;
}