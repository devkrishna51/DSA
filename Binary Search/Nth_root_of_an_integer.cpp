#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
     int NthRoot(int n, int m)
     {
          if (m == 0)
          {
               return 0 ; 
          }
          int start = 1 ; 
          int end = m ; 
          while(start <= end)
          {
               int mid = (start+end) /2 ; 
               int sum =1 ; 
               for(int i = 0 ; i < n ; i ++)
               {
                    sum *= mid ; 
               }
               if(sum == m)
               {
                    return mid ; 
               }
               else if (sum < m)
               {
                    start  = mid +1 ; 
               }
               else if(sum > m )
               {
                    end = mid-1 ; 
               }

          }
          return -1;  
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