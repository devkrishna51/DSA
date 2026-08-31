#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp = n;
        int count = 0;
        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }
        int b = n % 10;
        int sum = (b - 1) * 10;
        if (count == 1)
        {
            sum += 1;
        }
        else if (count == 2)
        {
            sum += 3;
        }
        else if (count == 3)
        {
            sum += 6;
        }
        else if (count == 4)
        {
            sum += 10;
        }
        cout << sum << endl;
    }
    return 0;
}