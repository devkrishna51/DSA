#include <bits/stdc++.h>
using namespace std;

int main()
{
     vector<vector<int>> mat(5 , vector<int> (5));
     int row  ,col ; 
     for(int i =0 ; i < 5 ; i++){
          for(int j = 0 ; j < 5 ; j++){
               int n  ; 
               cin >> n ; 
               mat[i][j] = n ; 
               if(n == 1){
                    row = i ; 
                    col = j ; 
               }
          }
     }
     int sum = abs(row - 2) + abs(col -2 ) ; 
     cout << sum ; 
     return 0;
}