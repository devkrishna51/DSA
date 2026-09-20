#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          long long a, b, c, d;
          cin >> a >> b >> c >> d;

          long long x = a, y = b, z = c;

          while (true)
          {
               if (x + y > z)
               {
                    cout << x << " " << y << " " << z << endl;
                    break;
               }
               if(x < b){
                    x++ ; 
               }
               else if(y < c){
                    y++ ; 
               }
               else{
                    z++ ; 
               }
          }
     }
     return 0;
}