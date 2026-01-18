#include<iostream>
#include<vector>
using namespace std ;
class Solution
{

     public : 
     void check_and_find(vector<string> &ans , string str , string space , int i = 0)
     {
          if(i == str.size() -1)
          {
               space += str[i] ; 
               ans.push_back(space) ; 
               return ; 
          }
        
          check_and_find(ans , str ,space + str[i] + " " ,i+1) ; 

          
          check_and_find(ans , str , space + str[i] , i+1) ; 
     }
          vector<string> permutation(string &str)
          {
               vector<string> ans ; 
               string space = "" ; 
               check_and_find(ans , str , space) ; 
               return ans ; 

          } 
};
int main()
{
     string str = "ABC" ; 
     Solution s1 ; 
     vector<string> result = s1.permutation(str) ; 

     for(auto str : result)
     {
          cout << "(" << str << ")  " ; 
     }
     cout << endl  ;

     return 0 ; 
}