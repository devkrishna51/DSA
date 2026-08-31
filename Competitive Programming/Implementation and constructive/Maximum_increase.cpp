#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int longest = 1 ; 
    int ans = 0 ;
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i] < arr[i+1]){
            longest ++ ; 
        }
        else{
            ans = max(ans , longest) ; 
            longest = 1 ; 
        }
    }
    ans = max(longest , ans) ; 
    cout << ans ; 

    return 0;
}