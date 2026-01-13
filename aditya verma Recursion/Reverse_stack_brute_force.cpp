#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution
{

public:
     void ReverseStack(stack<int> &s)
     {
          int n = s.size();
          vector<int> arr;
          for (int i = 0; i < n; i++)
          {
               arr.push_back(s.top());
               s.pop();
          }
          for (int i = 0; i < arr.size(); i++)
          {
               s.push(arr[i]);
          }
     }
};
int main()
{
     stack<int> s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);
     s.push(6);
     s.push(7);

     Solution s1 ; 
     s1.ReverseStack(s) ; 

     while(!s.empty())
     {
          cout << s.top() << endl ; 
          s.pop() ; 
     }
     return 0;
}