#include <iostream>
#include <vector>
using namespace std;
class Solution
{

public:
     void Rotate(vector<int> &arr, int k)
     {
          int n = arr.size();
          int start = 0;
          int end = n - 1;
          while (start <= end)
          {
               int temp = arr[start];
               arr[start] = arr[end];
               arr[end] = temp;
               start++;
               end--;
          }
          if(k > n)
          {
               k = k % n ; 
          }
          start = 0, end = k - 1;
          while (start <= end)
          {
               int temp = arr[start];
               arr[start] = arr[end];
               arr[end] = temp;
               start++;
               end--;
          }
          start = k, end = n - 1;
          while (start <= end)
          {
               int temp = arr[start];
               arr[start] = arr[end];
               arr[end] = temp;
               start++;
               end--;
          }
     }
};
int main()
{
     vector<int> nums;
     int n = 100000;
     for (int i = 1; i <= n; i++)
     {
          nums.push_back(i);
     }

     int k = 123456789;

     Solution s1;
     s1.Rotate(nums, k);
     for(auto i : nums)
     {
          cout << i << "  ";
     }
     return 0;
}