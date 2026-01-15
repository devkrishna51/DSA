#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
class Solution
{
     
     vector<vector<int>> result ; 
          void get_all_subsets(vector<int> &arr , vector<int> &ans ,int i = 0)
          {
               if(i == arr.size())
               {
                    result.push_back(ans) ; 
                    return ;
               }
               ans.push_back(arr[i]) ; 
               get_all_subsets(arr , ans , i+1) ;

               ans.pop_back() ; 
               int index = i+1 ; 

               while(index < arr.size() && arr[index] == arr[index -1])
               {
                    index ++ ; 
               }
               get_all_subsets(arr , ans, index) ; 
          }
          public : 
          vector<vector<int>> print_unique_subsets(vector<int> &arr)
          {
               sort(arr.begin() , arr.end()) ; 
               vector<int> ans ; 
               get_all_subsets(arr , ans) ; 
               return result ;
          }
} ;
int main()
{

     vector<int> arr = {4,4,4,1,4} ; 
     Solution s1 ; 
     vector<vector<int>> result = s1.print_unique_subsets(arr) ;
     for(auto x : result)
     {
          cout << "{" ; 
          for(auto x2 :x )
          {
               cout << x2 <<" " ;
          }
          cout << "}" <<endl ; 
     }
     
     return 0 ; 
}