#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t ; 
    cin >>t ; 
    while(t--){
        int n ;
        cin >> n  ; 
        vector<long long> arr(2*n) ; 
        for(int i = 0; i < 2*n ; i++){
            int x ; 
            cin >> x ; 
            arr[i] = x ; 
        }
        cout << arr[n] - arr[n-1] << endl ; 
    }
    return 0;
}