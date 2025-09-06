#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ; 
class Solution
{

     public : 
     int LongestSubarray(vector<int> arr , int k)
     {
          int n = arr.size() ; 
          int count = 0 ; 
          int prefixSum  = 0 ; 
          unordered_map<int ,int > map ; 
          map[0] = 1;  
          for(int i = 0 ; i < n ; i++)
          {
               prefixSum += arr[i] ; 
               if(map.find(prefixSum - k ) != map.end())

               {
                    count += map[prefixSum - k] ; 
               }
               map[prefixSum]++  ; 
          } 
          return count ; 

     }
};
int main(){

     vector<int> arr = {1,2,3 } ;
     int k = 3 ; 
     Solution s1  ; 
     int result = s1.LongestSubarray(arr,k ) ; 
     cout << "The Subarrays are :  " << result  <<endl ;
     return 0 ; 

}