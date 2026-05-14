#include<bits/stdc++.h>
using namespace std ; 
class Solution {
     
     public:
     vector<int> nextSmallerEle(vector<int>& arr) {
          //  code here
          int n = arr.size();
          stack<int> st;
          vector<int> ans(n);
          for (int i = n - 1; i >= 0; i--)
          {
               int temp = arr[i];
               if (st.empty())
               {
                    st.push(temp);
                    ans[i] = -1;
               }
               else if (temp > st.top())
               {
                    ans[i] = st.top();
                    st.push(temp);
               }
               else
               {
                    int temp2 = -1;
                    while (!st.empty())
                    {
                         if (!(arr[i] > st.top()))
                         {
                              st.pop();
                         }
                         else
                         {
                              temp2 = st.top();
                              break;
                         }
                    }
                    ans[i] = temp2;
                    st.push(arr[i]);
               }
          }
          return ans ; 
     }
};
int main()
{    
     vector<int> arr = {4, 8, 5, 2, 25} ; 
     Solution s1 ; 
     vector<int> result = s1.nextSmallerEle(arr) ; 

     cout << "Resulting array : "  ; 
     for(auto x : result)
     {
          cout << x <<" " ; 
     }
     cout <<endl ; 

     return 0 ; 
}