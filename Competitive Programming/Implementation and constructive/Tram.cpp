#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
     int current = 0;
     int ans = INT_MIN;
     while (n--)
     {
          int a, b;
          cin >> a >> b;
          current = current - a;
          current = current + b;
          ans = max(ans, current);
     }
     cout << ans << endl;

     return 0;
}