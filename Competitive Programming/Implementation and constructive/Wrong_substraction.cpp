#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n , k ;
     cin >> n >> k ;
     while(k--){
        int digit = n % 10 ; 
        if(digit != 0){
            n = n - 1 ; 
        }
        else{
            n = n / 10 ; 
        }
     }
     cout << n ; 
     

     return 0;
}