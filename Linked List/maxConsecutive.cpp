#include <iostream>
#include <vector>
using namespace std;
class Solution
{

public:
     int MaxConsecutive(vector<int> &arr)
     {
          int n = arr.size();
          int count = 0, maxcount = 0;
          for (int i = 0; i < n; i++)
          {
               if (arr[i] == 1)
               {
                    count++;
                    maxcount = max(count, maxcount);
               }
               else
               {
                    count = 0;
               }
          }
          return maxcount;
     }
};
int main()
{
     vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1};
     Solution s1;
     int c = s1.MaxConsecutive(arr);
     cout << "MAXIMUM CONSECUTIVE : " << c << endl;
     return 0;
}