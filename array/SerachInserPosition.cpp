#include<iostream>
#include<vector>
using namespace std ; 
class Solution{

     public : 
     int searchInsertPos(vector<int> &arr , int target)
     {
          int n = arr.size() ; 
          int start = 0 , end = n- 1; 
          while(start <=end)
          {
               int mid = (start+end )/ 2;  
               if(arr[mid] == target)
               {
                    return mid ; 
               }
               else if(arr[mid] > target)
               {
                    end=  n-1; 
               }
               else if(arr[mid] < target)
               {
                    start = mid + 1 ; 
               }

          }
          return start ; 
     }
};
int main()
{
     vector<int> arr = {1,3,4,5}  ; 
     int target = 6 ; 
     Solution s1  ; 
    int result =  s1.searchInsertPos(arr, target) ; 
     cout << "The Index is : " << result <<endl ;
     return 0 ; 
}