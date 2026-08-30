#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n, k, l, c, d, p, nl, np;
     cin >> n >> k >> l >> c >> d >> p >> nl >> np;

     int slices = c * d;
     int litres = (k * l ) / nl; 
     int gram = p / np ; 

     int answer = min({slices , litres , gram}) ; 

     cout << answer/n ; 
     
     return 0;
}