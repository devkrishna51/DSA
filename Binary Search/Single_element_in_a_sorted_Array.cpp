#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 
class Solution 
{

     public : 
          int SingleNonDuplicate(vector<int> &arr)
          {
               int n = arr.size()  ; 
               int start = 0 ; 
               int end =  n -1 ; 
               while(start < end)
               {
                    int mid =( start +end )/2 ; 
                    if(mid == 0 && mid < n-1 && arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
                    {
                         return arr[mid] ; 
                    }
                    if ((mid % 2 == 0 && arr[mid] == arr[mid+1] ) || (mid % 2 != 0 && arr[mid] == arr[mid-1]))
                    {
                         start = mid+1 ; 
                    }
                    else{
                         end = mid-1 ; 
                    }
               }
               return arr[start] ; 
          }
};
int main()
{
     vector<int> arr = {3,3,7,7,10,11,11} ; 
     Solution s1 ; 
     int result = s1.SingleNonDuplicate(arr) ; 
     cout << "The Non Duplicate Element is : " << result ; 
     return 0 ; 
}