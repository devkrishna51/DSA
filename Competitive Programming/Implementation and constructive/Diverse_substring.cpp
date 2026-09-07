#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            cout << "YES" << endl;
            cout << str.substr(i, 2) << endl;
            return 0;
        }
    }
    cout << "NO";

    return 0;
}