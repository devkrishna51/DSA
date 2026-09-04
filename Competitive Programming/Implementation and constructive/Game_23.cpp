#include <bits/stdc++.h>
using namespace std;
int find(int sum, int target)
{
    if (sum == target)
    {
        return 0;
    }
    if (sum > target)
    {
        return 1e9;
    }
    int by2 = 1+find(sum * 2, target);

    int by3 = 1+find(sum * 3, target);
    return  min(by2, by3);
}
int main()
{
    int n , m ; 
    cin >> n >> m ; 
    int ans = find(n , m ); 
    if(ans >= 1e9){
        cout << "-1" ; 
    }
    else{
        cout << ans ; 
    }
    return 0;
}