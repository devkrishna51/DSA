#include<bits/stdc++.h>
using namespace std ; 
class Solution
{
     bool isPossible(vector<int> &arr , int c , int minAllowance)
     {
          int cow = 1 , lastPosition = arr[0] ; 
          for(int i = 1 ; i < arr.size() ; i++)
          {
               if((arr[i]-lastPosition) >= minAllowance)
               {
                    cow ++ ; 
                    lastPosition = arr[i] ; 
               }
               if(cow == c)
               {
                    return true ; 
               }

          }
          return false ; 
      }

     public : 

     int aggressive_cows(vector<int> &arr , int cows)
     {
          if(cows > arr.size())
          {
               return -1; 
          }
          sort(arr.begin() , arr.end()) ; 
          int start = 1 ; 
          int end = arr[arr.size()-1] - arr[0] ;
          int ans = 0 ;  
          while(start <= end)
          {
               int mid = (start+end)/2 ;     

               if(isPossible(arr , cows , mid))
               {
                    ans = mid ; 
                    start = mid+1 ; 
               }
               else{
                    end = mid-1 ; 
               }
          }
          return ans ; 
     }
} ;

int main()
{
     vector<int> arr = {10, 1, 2, 7, 5} ; 
     int k = 3 ; 

     Solution s1 ; 
     int result = s1.aggressive_cows(arr , k ) ; 
     cout << "The Result is  : " << result <<endl ;; 
     return 0 ; 
}