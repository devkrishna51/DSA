#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
class Solution
{
  public : 
     bool canServer(vector<int> & arr){

          int n = arr.size() ; 
          int five = 0 , ten = 0 ; 
          bool flag = true ; 
          for(int i = 0 ; i < n ; i++)
          {
               if(arr[i] == 5)
               {
                    five ++ ; 
                    flag = true; 
                    continue ; 
               }
               else if(arr[i] == 10)
               {
                    if(five >= 1)
                    {
                         five -- ;
                         ten ++ ; 
                         flag = true; 
                         continue ;
                    }
                    else{
                         flag = false ; 
                         break ;
                    }
               }
               else if(arr[i] == 20)
               {
                    if(five >= 1 && ten >=1)
                    {
                         five -- ; 
                         ten -- ;
                         flag = true; 
                         continue ; 
                    }
                    else if(five >= 3)
                    {
                         five = five -3 ; 
                         flag = true; 
                    }
                    else{
                         flag = false;
                         break ;  
                    }
               }
          }
          return flag ; 
     }
};
int main()
{
     vector<int> arr = {5, 5, 5, 10, 20} ; 
     Solution s1 ; 
     bool result = s1.canServer(arr) ; 
     if(result)
     {
          cout << "All customers has been satisfied" <<endl ; 
     }
     else{
          cout << "All customers is not satisfied"  <<endl ; 
     }
     return 0 ; 
}