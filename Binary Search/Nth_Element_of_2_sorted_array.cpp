#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
class Solution
{

public:
     int KthElement(vector<int> &arr, vector<int> &arr2, int k)
     {
          int n = arr.size();
          int m = arr2.size();

          if (n > m)
          {
               return KthElement(arr2, arr, k);
          }
          int start = max(0, k - m);
          int end = min(k, n);
          while (start <= end)
          {
               int cut1 = (start + end) / 2;
               int cut2 = k - cut1;

               int left1 = (cut1 == 0) ? INT_MIN : arr[cut1 - 1];
               int left2 = (cut2 == 0) ? INT_MIN : arr2[cut2 - 1];

               int right1 = (cut1 == n) ? INT_MAX : arr[cut1];
               int right2 = (cut2 == m) ? INT_MAX : arr2[cut2];

               if(left1 <= right2 && left2 <= right1)
               {
                    return max(left1 , left2) ; 
               }
               else if(left1 > right2)
               {
                    end = cut1 -1 ; 
               }
               else{
                    start = cut1 +1 ; 
               }
          }
          return -1 ; 
     }
};

int main()
{

     vector<int> arr = {2, 3, 6, 7, 9} ; 
     vector<int> arr2 = {1, 4, 8, 10} ; 
     int k = 5 ; 
     Solution s1 ; 

     int result = s1.KthElement(arr , arr2 , k) ; 
     cout << "the " << k << " th element is : " << result ; 
     return 0;
}
