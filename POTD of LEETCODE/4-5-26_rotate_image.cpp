#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     void rotate(vector<vector<int>> &arr)
     {
          int n = arr.size(); 
     
          cout << "Original Matrix : " <<endl ; 
          for(int i = 0 ; i < n ; i++)
          {
               for(int j = 0 ; j < n ; j++)
               {
                    cout << arr[i][j] << " "; 
               }
               cout << endl ; 
          }

          for(int i = 0 ; i < n ; i++)
          {
               for(int j = i+1 ; j < n ; j++)
               {
                    int temp = arr[i][j] ; 
                    arr[i][j] = arr[j][i] ; 
                    arr[j][i] = temp ; 
               }
          }
          for(int i = 0 ; i < n ; i ++)
          {
               int start = 0 , end = n-1; 
               while(start < end)
               {
                  int temp = arr[i][start] ; 
                  arr[i][start] = arr[i][end] ; 
                  arr[i][end] = temp ; 
                  start ++ ; 
                  end -- ; 
               }
           }
     }

};
int main()
{
     vector<vector<int>> arr = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}

     };

     Solution s1;
     s1.rotate(arr);

     cout << endl
          << endl;
     for (auto x : arr)
     {
          for (auto x2 : x)
          {
               cout << x2 << " ";
          }
          cout << endl;
     }
     return 0;
}