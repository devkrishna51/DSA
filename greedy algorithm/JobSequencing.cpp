#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
class Solution

{
public:
     vector<int> FindMaximumProfit(vector<int> &profit, vector<int> &deadline)
     {

          int maxD = deadline[0];
          int n = deadline.size();
          for (int i = 0; i < n ; i++)
          {
               if (deadline[i] > maxD)
               {
                    maxD = deadline[i];
               }
          }
          vector<pair<int, int>> mat;

          for (int i = 0; i < n; i++)
          {
               mat.push_back({profit[i], deadline[i]});
          }
          sort(mat.rbegin(), mat.rend());
          vector<int> arr(maxD, -1);
          int sum = 0, count = 0;
          for (int i = 0; i < n; i++)
          {
               int d = mat[i].second - 1;
               for (int j = d; j >= 0; j--)
               {
                    if (arr[j] == -1)
                    {
                         arr[j] = mat[i].first;
                         break;
                    }
               }
              
          }
           for(auto x : arr)
               {
                    if(x != -1)
                    {
                        
                         sum += x ; 
                         count ++ ; 

                    }
               }
               return {count, sum};
     }
};
int main()
{
     vector<int> profit = {50, 10, 20, 30};
     vector<int> deadline = {3, 1, 2, 2};
     Solution s1 ; 
    vector<int> h =  s1.FindMaximumProfit(profit , deadline) ; 
          for(auto x : h)
          
          {
               cout << x << " " ; 
          }
     return 0;
}