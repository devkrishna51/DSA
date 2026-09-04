#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin >> n ; 
    vector<int> arr(7) ; 
    for(int i = 0 ; i < 7 ; i++){
        int x ; 
        cin >> x ; 
        arr[i] = x ; 
    }
    int sum = 0 ; 
    int day = 0 ; 
    while(true ){
        sum += arr[day%7] ; 
        if(sum >= n ){
            cout << (day%7) +1 <<endl ; 
            break ; 
        }
        day++ ; 
    }
    return 0;
}