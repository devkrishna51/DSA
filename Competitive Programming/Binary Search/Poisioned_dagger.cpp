#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, h;
        cin >> n >> h;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long low = 1;
        long long high = h;
        long long ans = h;

        while (low <= high)
        {
            long long k = (low + high) / 2;

            long long damage = 0;

            for (int i = 0; i < n - 1; i++)
            {
                damage += min(k, a[i + 1] - a[i]);
            }

            damage += k;

            if (damage >= h)
            {
                ans = k;
                high = k - 1;
            }
            else
            {
                low = k + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}