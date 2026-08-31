#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int ans = 0;

    for(int i = 1 ;i <= w ; i++){
        ans += i * k; 
    }
    if(ans > n){
        cout << ans - n ;
    }
    else{
        cout << 0 ; 
    }


    return 0;
}