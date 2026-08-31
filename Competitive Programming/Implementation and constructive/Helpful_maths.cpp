#include <bits/stdc++.h>
using namespace std;

int main()
{
     string str;
     cin >> str;

     int one = 0, two = 0, three = 0, plus = 0;
     for (int i = 0; i < str.size(); i++)
     {
          if (str[i] == '1')
          {
               one++;
          }
          else if (str[i] == '2')
          {
               two++;
          }
          else if (str[i] == '+')
          {
               plus++;
          }
          else
          {
               three++;
          }
     }
     string result;
     while (one--)
     {
          result.push_back('1');
          if (plus > 0)
          {
               result.push_back('+');
               plus--;
          }
     }
     while (two--)
     {
          result.push_back('2');
          if (plus > 0)
          {
               result.push_back('+');
               plus--;
          }
     }
     while (three--)
     {
          result.push_back('3');
          if (plus > 0)
          {
               result.push_back('+');
               plus--;
          }
     }
     cout << result;
     return 0;
}