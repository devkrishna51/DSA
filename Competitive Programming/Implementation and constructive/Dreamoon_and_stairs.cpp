#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; 
    cin >> n >> m ; 
    int start = (n+1) /2 ; 
    for(int moves = start ; moves <= n ; moves++){
        if(moves % m == 0 ){
            cout << moves << endl ; 
            return 0 ; 
        }
    }
   cout << -1 << endl ; 
    return 0;
}