#include <iostream>
#include <vector>
#include <stack>

using namespace std;
class Solution 
{

     public : 
          void deletingmid(stack<int> &s , int n , int i = 0 )
          {
               if(i == n/2)
               {
                    s.pop() ;
                    return  ; 
               }
               int a = s.top() ; 
               s.pop() ; 
               deletingmid(s , n , i+1) ; 
               s.push(a) ; 
          }
          void deleteMid(stack<int> &s)
          {
               deletingmid(s , s.size()) ; 
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
     Solution s1;
     s1.deleteMid(s);

       while (!s.empty())
     {
          cout << s.top() << endl;
          s.pop();
     }

     return 0;
}