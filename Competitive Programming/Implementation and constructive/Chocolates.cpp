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
    long long curr = arr[n - 1];
    long long ans = curr;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < curr)
        {
            ans += arr[i];
            curr = arr[i];
        }
        else if (arr[i] >= curr)
        {
            curr = max(0LL, curr - 1);
            ans += curr;
        }
    }
    cout << ans;
    return 0;
}