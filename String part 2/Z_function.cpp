#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> search(string &pat, string &txt)
     {
          // code here
          int n = txt.size();
          int patSize = pat.size();
          vector<int> result;
          for (int i = 0; i < n; i++)
          {

               if (txt[i] == pat[0])
               {

                    if (i + patSize - 1 < n)
                    {

                         if (txt.substr(i, patSize) == pat)
                         {
                              result.push_back(i);
                         }
                    }
                    else
                    {
                         break;
                    }
               }
          }
          return result;
     }
};
int main()
{
     Solution s1;

     string txt = "ababcabcab";
     string pat = "abc";

     vector<int> ans = s1.search(pat, txt);

     cout << "The pattern occurs at indices: ";

     for (int x : ans)
     {
          cout << x << " ";
     }

     cout << endl;

     return 0;
}