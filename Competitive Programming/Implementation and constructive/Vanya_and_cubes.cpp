#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n ;  
    cin >> n ; 
    int total = 0 ; 
    int count = 0 ; 
    for(int i = 1 ; i <= n ;i++){
        int level = i*(i+1)/2 ; 
        if(total + level > n )
        {
            break ; 
        }
        total += level ; 
        count ++ ; 
    }
    cout << count ; 

    return 0;
}