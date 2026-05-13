#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool flag = true;
     void check(string &s, stack<char> &st, int n, int i)
     {
          if (!flag)
          {
               return;
          }

          if (i == n)
          {
               if (!st.empty())
               {
                    flag = false;
               }
               return;
          }

          char ch = s[i];
          if (ch == '(' || ch == '[' || ch == '{')
          {
               st.push(ch);
               check(s, st, n, i + 1);
               return;
          }

          if (st.empty())
          {
               flag = false;
               return;
          }

          char temp = st.top();
          if ((temp == '(' && ch == ')') || (temp == '[' && ch == ']') || (temp == '{' && ch == '}'))
          {

               st.pop();
               check(s, st, n, i + 1);
          }
          else
          {
               flag = false;
          }
     }
     bool isValid(string s)
     {
          int n = s.size();
          stack<char> st;
          int i = 0;
          check(s, st, n, i);
          return flag;
     }
};
int main()
{
     string s = "()[]{}()){)}";
     Solution s1;

     bool result = s1.isValid(s);
     if (result)
     {
          cout << " The String is Balanced";
     }
     else
     {
          cout << "the String is not balanced";
     }
}