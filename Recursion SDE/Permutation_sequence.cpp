#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{

public:
     string getPermutation(int n, int k)
     {
          string str;
          vector<int> arr;
          for (int i = 1; i <= n; i++)
          {
               arr.push_back(i);
          }
          if (k == 1)
          {
               for (auto x : arr)
               {
                    str += to_string(x);
               }
               return str;
          }
          int count = 1;
          while (1)
          {
               int pivot = -1;
               for (int i = arr.size() - 1; i > 0; i--)
               {
                    if (arr[i - 1] < arr[i])
                    {
                         pivot = i-1;
                         break;
                    }
               }
               if (pivot == -1)
                    break;

               for (int i = arr.size() - 1; i > 0; i--)
               {
                    if (arr[i] > arr[pivot])
                    {
                         swap(arr[i], arr[pivot]);
                         count++;
                         break;
                    }
               }
               reverse(arr.begin() + pivot + 1, arr.end());

               if (count == k)
               {
                    for (auto x : arr)
                    {
                         str += to_string(x);
                    }
                    break;
               }
          }
          return str;
     }
};
int main()
{
     int n, k;
     cout << "Enter the n : ";
     cin >> n;
     cout << "Enter the k : ";
     cin >> k;

     Solution s1 ; 
     string Get_result = s1.getPermutation(n , k) ; 
     cout << "The Kth permutation is : " << Get_result <<endl ;
     return 0;
}