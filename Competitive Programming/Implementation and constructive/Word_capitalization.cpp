#include <bits/stdc++.h>
using namespace std;

int main()
{
     string str;
     cin >> str;

     char ch = str[0];
     if (!isupper(ch))
     {
          str[0] = toupper(ch);
          cout << str;
     }
     else
     {
          cout << str;
     }
     return 0;
}