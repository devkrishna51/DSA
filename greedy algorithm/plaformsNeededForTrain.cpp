#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 
class Solution 
{

     public : 
     int minPlatform(vector<int> &arr , vector<int> &dep)
     {
          sort(arr.begin() , arr.end()) ; 
          sort(dep.begin() , dep.end()) ; 
          int n = arr.size() ; 
          int i = 0 , j = 0  ;
          int maxplatform = 0 ; 
          int plat = 0 ; 
          while(i < n && j < n )
          {
               if(arr[i] <= dep[j])
               {
                    plat++ ; 
                    i++ ; 
                    if(plat > maxplatform)
                    {
                         maxplatform = plat ; 
                    }
               }
               else{
                    plat -- ; 
                    j++ ; 
               }
          } 
          return maxplatform ; 
     }
};
int main()
{
     vector<int> arr = {900, 940, 950 ,1100 ,1500, 1800} ; 
     vector<int> dep = {910, 1200, 1120, 1130, 1900 ,2000} ; 
     Solution s1 ; 
     int result = s1.minPlatform(arr , dep) ; 

     cout << "The Maximum Platform : " << result ; 

     return 0 ; 
}