#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < 2 * n + 1; i++)
    {
        if (i <= n)
        {
            for (int j = i; j < n; j++)
            {
                cout << "  ";
            }
            if (i == 0)
            {
                cout << 0 <<endl ;
                continue;
            }
            cout << 0 << " "; 
            for(int k = 1 ; k <= i ; k++){
                cout << k << " " ; 
            }
          
                for(int k = i-1 ; k>= 1 ; k--){
                    cout << k << " " ; 
                }
            
            cout <<  0 <<endl ; 

        }
        else{
            int x = 2 * n - i;
            for(int j = n ; j < i ; j++){
                cout << "  " ; 
            }
            if(i == 2*n){
                cout << 0 <<endl ;
                break ; 
            }
            cout << 0 << " ";
            for(int j = 1 ; j <= x ; j++){
                cout << j << " " ; 
            }
            for(int j = x-1 ; j>=1 ;j--){
                cout << j << " " ;
            }
            cout << 0 <<endl ; 
        }
    }
    return 0;
}