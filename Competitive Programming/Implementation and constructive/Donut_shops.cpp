#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ; 
    cin >>t ; 
    while(t--){
        long long a , b , c  ;
        cin >> a >> b >> c ; 
        long long ans1 = -1 ; 
        long long ans2 = -1 ; 

        if(a < c){
            ans1 = 1 ; 
        }
        if(c < a*b){
            ans2 = b ; 

        }
        cout << ans1 << " " << ans2 <<endl ; 
    }
    return 0;
}