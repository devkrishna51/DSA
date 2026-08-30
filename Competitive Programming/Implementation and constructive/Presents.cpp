#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
     vector<int> arr(n+1);
     for (int i = 0; i < n; i++)
     {
          int x ;
          cin >> x ;
           arr[x] = i+1;
     }
     for(int i = 1 ; i <=n ; i++){
          cout << arr[i] << " " ; 
     }

     return 0;
}