#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
     int NthRoot(int n, int m)
     {
          bool flag = false, flag2 = false;
          int ans = 0;
          for (int i = 1; i <= m; i++)
          {
               int sum = 1;
               for (int j = 1; j <= n; j++)
               {
                    sum *= i;
               }
               if (sum == m)
               {
                    flag = true;
                    ans = i;
                    break;
               }
               else if (sum > m)
               {
                    flag2 = true;
                    ans = -1;
                    break;
               }
          }
          if (flag == true && flag2 == false)
          {
               return ans;
          }
          else
          {
               return ans;
          }
     }
};
int main()
{
     int n = 3;
     int m = 8;
     Solution s1;
     int result = s1.NthRoot(n, m);

     cout << "The Nth Root is : " << result ; 
     return 0;
}