#include <iostream>
#include <stack>
using namespace std;
class Solution
{

     void insert(stack<int> &s, int t)
     {
          if (s.size() == 0 || s.top() <= t)
          {
               s.push(t);
               return;
          }
          int a = s.top();
          s.pop();
          insert(s, t);
          s.push(a);
     }

public:
     void sortStack(stack<int> &s)
     {
          if (s.empty())
          {
               return;
          }
          int t = s.top();
          s.pop();
          sortStack(s);
          insert(s, t);
     }
};
int main()
{

     stack<int> s;
     s.push(1);
     s.push(3);
     s.push(2);
     s.push(6);
     s.push(5);
     s.push(4);
     stack<int> s2(s);
     while (!s2.empty())
     {
          cout << s2.top() << endl;
          s2.pop();
     }
     cout << endl
          << endl;

     Solution s1;
     s1.sortStack(s);
     
     stack<int> s3(s);

     while (!s3.empty())
     {
          cout << s3.top() << endl;
          ;
          s3.pop();
     }
     return 0;
}