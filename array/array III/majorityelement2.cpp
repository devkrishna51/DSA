#include<iostream> 
#include<vector>
#include<map>
using namespace std ; 
class Solution 
{
 
     public: 
          vector<int> majorityelem(vector<int> arr)
          {
               int n = arr.size() ; 
               int majority = n / 3 ; 
               map<int , int> hash ; 
               int store  = 0 ; 
              for(int i = 0 ; i < n ; i++)
              {
                    hash[arr[i]]++ ; 
              }
               for(auto j : hash)
               {
                    if(j.second > majority)
                    {
                         store = j.first ; 
                    }
               }
               return {store} ; 
     

          }
}; 
int main()
{
     vector<int> arr = {1, 2, 1, 1, 3, 2};  
     Solution s1 ; 
     vector<int> result =   s1.majorityelem(arr);
     cout << "the Majority eleemene is :  " ;
     for(auto it : result)
     {
          cout << it; 
     }
     return  0 ;  
}