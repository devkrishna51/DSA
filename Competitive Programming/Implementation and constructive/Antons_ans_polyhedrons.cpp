#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
    
     int ans = 0 ; 
     while(n--){
          string temp ; 
          cin >> temp ; 
          if(temp == "Tetrahedron"){
               ans += 4 ; 
          }
          else if(temp == "Cube"){
               ans += 6 ; 
          }
          else if(temp == "Octahedron"){
               ans += 8 ; 
          }
          else if(temp == "Dodecahedron"){
               ans += 12 ; 
          }
          else if(temp == "Icosahedron"){
               ans += 20 ; 
          }
     }
     cout << ans << endl ; 
     return 0;
}