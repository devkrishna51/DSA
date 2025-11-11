#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
     vector<int> arr = {-1, 0, 1, 2, -1, -4};
     int n = arr.size();
     sort(arr.begin() , arr.end()) ;
     vector<vector<int>> hash ; 
     for (int i = 0; i < n; i++)
     {
          if (i > 0 && arr[i] == arr[i - 1])
          {
               continue;
          }
          int left = i + 1;
          int right = n - 1;
          while (left < right)
          {
               int sum = arr[i] + arr[left] + arr[right];

               if (sum == 0)
               {
                    hash.push_back({arr[i] , arr[left] , arr[right]}) ; 
                    left++;
                    right--;
                    while (left < right && arr[left] == arr[left + 1])
                    {
                         left++;
                    }
                    while (left < right && arr[right] == arr[right - 1])
                    {
                         right--;
                    }
               }
               else if (sum < 0)
               {
                    left++;
               }
               else
               {
                    right--;
               }
          }
     }
    for (auto &row : hash)
    {
        for (auto &val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

     return 0;
}
