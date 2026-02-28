#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
     vector<int> mergeArrays(vector<vector<int>> &mat)
     {
          vector<int> result;
          priority_queue<int, vector<int>, greater<int>> h;
          for (auto x : mat)
          {
               for (auto x2 : x)
               {
                    h.push(x2);
               }
          }
          while (!h.empty())
          {
               result.push_back(h.top());
               h.pop();
          }
          return result;
     }
};
int main()
{
     vector<vector<int>> arr = {
         {1, 3, 5},
         {2, 4, 6},
         {0, 7, 8}
     };

     Solution s1 ; 
     vector<int> result = s1.mergeArrays(arr) ; 
     cout << "Sorted Arrays : " << endl ; 
     for(auto x : result)
     {
          cout << x <<" " ; 
     }
     cout << endl ;

     return 0;
}