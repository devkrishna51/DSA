#include <bits/stdc++.h>
using namespace std;

int main()
{
     int r;
     int c;
     cin >> r >> c;
     vector<vector<string>> result;
     int count = 0;
     for (int i = 1; i <= r; i++)
     {
          if (i != 0 && i % 2 == 0)
          {
               if (count % 2 == 0)
               {
                    string temp = ".";
                    for (int j = 0; j < c - 2; j++)
                    {
                         temp.push_back('.');
                    }
                    temp.push_back('#');
                    result.push_back({temp});
                    count++;
               }
               else
               {
                    string temp = "#";
                    for (int j = 0; j < c - 1; j++)
                    {
                         temp.push_back('.');
                    }
                    result.push_back({temp});
                    count++;
               }
          }
          else
          {
               string temp = "";
               for (int j = 0; j < c; j++)
               {
                    temp += '#';
               }
               result.push_back({temp});
          }
     }
     for (auto x : result)
     {
          for (auto x2 : x)
          {
               cout << x2 << " ";
          }
          cout << endl;
     }
     return 0;
}