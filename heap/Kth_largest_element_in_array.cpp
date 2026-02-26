#include <bits/stdc++.h>
using namespace std;
class Solution
{
     vector<int> arr;
     int count = 0;
     void insert(int x)
     {
          arr.push_back(x);
          int index = arr.size() - 1;
          while (index > 0)
          {
               int parent = (index - 1) / 2;
               if (arr[parent] < arr[index])
               {
                    swap(arr[parent], arr[index]);
                    index = parent;
               }
               else
               {
                    break;
               }
          }
     }
     int pop(int k)
     {
          if (arr.size() == 0)
          {
               return -1;
          }
          int popped = -1;
          while (count < k)
          {
               popped = arr[0];
               swap(arr[0], arr[arr.size() - 1]);
               arr.pop_back();
               count ++ ; 
               for (int i = 0; i < arr.size();)
               {
                    int lindex = 2 * i + 1;
                    int rindex = 2 * i + 2;
                    int largest = i ; 
                    if(lindex < arr.size() && arr[largest] < arr[lindex])
                    {
                         largest = lindex ; 
                    }
                    if(rindex < arr.size() && arr[largest] < arr[rindex])
                    {
                         largest = rindex ; 
                    }
                    if(largest == i)
                    {
                         break ; 
                    }
                    swap(arr[i] , arr[largest]) ; 
                    i = largest ; 
               }
          }
          return popped ; 
     }

public:
     int findKthLargest(vector<int> &nums, int k)
     {
          for(int i = 0 ; i < nums.size(); i++)
          {
               insert(nums[i]) ; 
          }
          int kth = pop(k) ;
          return kth ;  
     }
};
int main()
{
     vector<int> arr = {3,2,3,1,2,4,5,5,6} ; 
     int k = 3 ; 

     Solution s1 ; 
     cout << s1.findKthLargest(arr ,k) << "  <- is the " << k << " th largest element"<<endl  ; 
     return 0;
}