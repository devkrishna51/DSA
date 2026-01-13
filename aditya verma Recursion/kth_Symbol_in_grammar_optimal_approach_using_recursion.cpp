#include <iostream>
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
          int mid = pow(2, n - 2);
          if (k <= mid)
          {
               return kthGrammar(n - 1, k);
          }
          return !kthGrammar(n - 1, k - mid);
     }
};
int main()
{
     int n , k ; 
     cout << "Enter the n : " ; 
     cin >> n ; 

     cout << "Enter the K : " ; 
     cin >>  k ; 
     Solution s1;
     int result = s1.kthGrammar(n,k);
     cout << "The Result is : " << result;

     return 0;
}