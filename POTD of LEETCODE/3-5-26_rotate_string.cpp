#include <iostream>
using namespace std;
class Solution
{
public:
     bool rotateString(string s, string goal)
     {
          int n = s.size();
          for (int i = 0; i < n; i++)
          {
               char last = s[n - 1];
               for (int i = n - 1; i > 0; i--)
               {
                    s[i] = s[i - 1];
               }
               s[0] = last;

               if (s == goal)
               {
                    return true;
               }
          }
          return false;
     }
};
int main()
{
     string s = "abcde" ; 
     string goal = "cdeab" ; 
     Solution s1 ; 
     bool result = s1.rotateString(s,goal) ;  
     if(result) cout << "The string is can be rotated " ; 
     else cout << "The string is can't be rotatetd" ; 
     return 0;
}