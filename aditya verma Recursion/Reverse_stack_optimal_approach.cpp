#include <iostream>
#include <stack>
using namespace std;
class Solution 
{
     void insert(stack<int> &s , int t)
     {
          if(s.size() == 0)
          {
               s.push(t) ; 
               return  ; 
          }
          int a = s.top() ; 
          s.pop() ;
          insert(s ,t) ; 
          s.push(a) ; 
     }
     public : 
     
          void reverseStack(stack<int> &s )
          {
               if(s.empty())
               {
                    return  ; 
               }
               int t = s.top() ; 
               s.pop() ; 
               reverseStack(s) ; 
               insert(s , t) ; 
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
     s1.reverseStack(s) ; 

     while(!s.empty())
     {
          cout << s.top() <<endl  ;
          s.pop() ;  

     }

     return 0;
}