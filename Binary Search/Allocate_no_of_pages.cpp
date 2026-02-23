#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
     bool isValid(vector<int> &arr, int k, int maxAllowed)
     {
          int student = 1;
          int pages = 0;
          for (int i = 0; i < arr.size(); i++)
          {
               if (arr[i] > maxAllowed)
               {
                    return false;
               }
               if (pages + arr[i] <= maxAllowed)
               {
                    pages += arr[i];
               }
               else
               {
                    student++;
                    pages = arr[i];
               }
          }
          if (student <= k)
          {
               return true;
          }
          else
          {
               return false;
          }
     }
     int allocate_books(vector<int> &arr, int k)
     {
          if (k > arr.size())
          {
               return -1;
          }
          int ans = -1;
          int sum = 0;
          for (int i = 0; i < arr.size(); i++)
          {
               sum += arr[i];
          }

          int start = 0;
          int end = sum;
          while (start <= end)
          {
               int mid = (start + end) / 2;

               if (isValid(arr, k, mid))
               {
                    ans = mid ; 
                    end = mid-1 ; 
               }
               else{
                    start = mid+1 ; 
               }
               
          }
          return ans ; 
     }
};
int main()
{

     vector<int> arr = {12, 34, 67, 90} ; 
     int k = 2 ; 
     Solution s1 ; 
     int result = s1.allocate_books(arr , k) ; 
     cout << "the Result is : " << result ; 
     return 0;
}