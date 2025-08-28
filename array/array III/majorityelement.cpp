#include <iostream>
#include<vector> 
#include<algorithm>
using namespace std;
class Solution
{

     public:
          int majorityelem(vector<int> arr)
          {
               int n = arr.size() ; 
               int majority = n / 2 ; 
               sort(arr.begin() , arr.end()) ; 
               return arr[majority] ; 

          }

};
int main()
{
     vector<int> arr  = {1, 1, 1, 2, 1, 2};
     for(auto it : arr)
     {
          cout << it << "  "; 
     }
     Solution s1 ; 
    int result  =  s1.majorityelem(arr) ; 
    cout << "\n\nThe majority element is : " << result ;
     return 0;
}