#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr ; 
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int step = 0;
        while (1)
        {
            step++ ; 
            if (a < b)
            {
                a = a + b;
                if (a > n)
                {
                    arr.push_back(step) ; 
                    break;
                }
            }
            else
            {
                b = a + b;
                if (b > n)
                {
                    arr.push_back(step) ; 
                    break;
                }
            }
        }
    }
    for(auto x : arr){
        cout << x << endl ; 
    }

    return 0;
}