#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std ; 
class Solution
{

     public : 
      void sortStack(stack<int> &s)
      {
          int n = s.size( ) ; 
          vector<int> arr (n) ; 
          int i = 0 ; 
          while(i != n)
          {
               arr[i] = s.top() ; 
               s.pop() ; 
               i++ ; 
          }
          sort(arr.begin() , arr.end()) ;  
          for(int i = 0 ; i < arr.size() ; i++)
          {
               s.push(arr[i]) ; 
          }
      }
};
int main()
{
     stack<int> s   ;
     s.push(2); 
     s.push(5); 
     s.push(4); 
     s.push(3); 
     s.push(1);
     Solution s1  ; 
     s1.sortStack(s) ; 
     while(!s.empty())
     {
          cout << s.top() <<endl; 
          s.pop() ; 
     } 
     return 0 ; 
}