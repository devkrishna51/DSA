#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{

public:
     int search(vector<int> &arr, int key)
     {
          int n = arr.size() ; 
          int start = 0 ; 
          int end = n-1; 
          while(start <= end)
          {
               int mid =( start +end )/ 2 ; 
               if(arr[mid] == key)
               {
                    return mid ; 
               }
               if(arr[start] == key)
               {
                    return start ; 
               }
               if(arr[end] == key)
               {
                    return end ; 
               }
               if(arr[start] <= arr[mid])
               {
                    if(key >= arr[start] && key <= arr[mid])
                    {
                         end = mid -1 ;
                    }
                    else{
                         start = mid+1 ; 
                    }
               }
               else{
                    if(key <= arr[start] && key >= arr[mid])
                    {
                         start = mid+1 ; 
                    }
                    else{
                         end = mid-1 ; 
                    }
               }
          }
     }
};

int main()
{
     vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3} ; 
     int key  = 3 ; 
     Solution s1 ;
     int result = s1.search(arr , key) ; 
     cout << "\n\nThe '" << key  << "' is found on the '" << result << "' index\n" << endl ; 
      return 0;
}
