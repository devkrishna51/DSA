#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string result;
    unordered_set<char> st = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
    for (int i = 0; i < str.size(); i++)
    {
        if (st.count(str[i]))
        {
            continue;
        }
        result.push_back('.');
        if (isupper(str[i]))
        {
            result.push_back(tolower(str[i]));
        }
        else
        {
            result.push_back(str[i]) ; 
        }
    }
    cout << result ; 
    return 0;
}