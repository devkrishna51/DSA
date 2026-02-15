#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{

public:
     vector<vector<int>> permute(vector<int> &arr)
     {
          vector<vector<int>> ans;
          sort(arr.begin(), arr.end());
          ans.push_back(arr);
          while (1)
          {
               int pivot = -1000;
               for (int i = arr.size() - 1; i >= 0; i--)
               {
                    if (arr[i] > arr[i - 1])
                    {
                         pivot = i-1;
                         break;
                    }
               }
               if (pivot == -1000)
               {
                    int start = 0;
                    int end = arr.size() - 1;
                    while (start < end)
                    {
                         swap(arr[start], arr[end]);
                         start++;
                         end--;
                    }
                    ans.push_back(arr) ; 
                    break;
               }
               for (int i = arr.size() - 1; i > 0; i--)
               {
                    if (arr[pivot] < arr[i])
                    {
                         swap(arr[pivot], arr[i]);
                         break;
                    }
               }
               ans.push_back(arr);
          }
          return ans ; 
     }
};
int main()
{
     vector<int> arr = {1, 2, 3};
     Solution s1;
     vector<vector<int>> resul = s1.permute(arr);
     for (auto x : resul)
     {
          cout << "[ ";
          for (auto x2 : x)
          {
               cout << x2 << " ";
          }
          cout << "]" << endl;
          ;
     }
     return 0;
}