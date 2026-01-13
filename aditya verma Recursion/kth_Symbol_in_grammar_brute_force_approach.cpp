#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
class Solution
{
public:
     int kthGrammar(int n, int k)
     {
          if (n == 1 && k == 1)
          {
               return 0;
          }
          int ans = 0;
          while (n > 1)
          {
               int mid = pow(2, n - 2);
               if(k > mid)
               {
                    ans = 1 - ans ; 
                    k = k-mid ; 
               }
               n-- ; 
          }
          return ans ; 
     }
};
int main()
{

     int n, k;
     cout << "Enter the n  : ";
     cin >> n;
     ;
     cout << " Enter the K : ";
     cin >> k;
     Solution s1;
     int result = s1.kthGrammar(n, k);
     cout << endl
          << "the Result is : " << result << endl;

     return 0;
}