#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = n/7 ; i >= 0  ; i--){
        int remaining = n-7*i ; 
        if(remaining % 4 == 0){
            int x = remaining / 4 ; 
            for(int j = 0 ; j < x ; j++){
                cout << 4 ; 
            }
            for(int j = 0 ; j < i ; j++){
                cout << 7 ; 
            }
            return 0 ; 
        }
    }
    cout <<-1 ; 
    return 0 ; 
}