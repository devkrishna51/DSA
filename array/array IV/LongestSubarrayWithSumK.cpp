#include <iostream>
#include <vector>
using namespace std;
class Solution
{

public:
     int LongestSubarray(vector<int> arr, int k)
     {
          int n = arr.size();
          int longest = 0;
          for (int st = 0; st < n; st++)
          {
               for (int end = st; end < n; end++)
               {
                    int sum = 0;
                    int count = 0;
                    for (int i = st; i <= end; i++)
                    {
                         sum = sum + arr[i];
                         count++;
                    }
                    if (sum == k)
                    {
                         longest = max(longest , count);
                    }
               }
          }
          return longest;
     }
};
int main()
{
     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                        5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
                        10, 20, 30, 40, 50, 60, 70, 80, 90, 100,
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                        15, 25, 35, 45, 55, 65, 75, 85, 95, 105};
     int k = 100;

     Solution s1;
     int result = s1.LongestSubarray(arr, k);
     cout << "The Length of subarray is :  " << result << endl;
     ;

     return 0;
}