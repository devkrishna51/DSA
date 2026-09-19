#include <bits/stdc++.h>
using namespace std;
long long can(long long cap)
{
     long long ret = 0;
     for (long long k = 2; k * k * k <= cap; k++)
     {
          ret += (cap / (k * k * k));
     }
     return ret;
}
int main()
{
     long long n;
     cin >> n;
     long long low = 0, high = 1e18;
     long long ans = -1;
     while (low <= high)
     {
          long long mid = low + (high - low) / 2;
          long long result = can(mid);
          if (result >= n)
          {
               if (result == n)
                    ans = mid;

               high = mid - 1;
          }
          else if (result >= n)
          {
               high = mid - 1;
          }
          else
          {
               low = mid + 1;
          }
     }
     cout << ans;
     return 0;
}