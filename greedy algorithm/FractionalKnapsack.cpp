#include <iostream>
#include <vector>
#include <tuple>
#include<algorithm>
using namespace std;
class Solution
{
public:
     double fractionalKnapsack(vector<int> &val, vector<int> &wt, int capacity)
     {
          int n = val.size();
          vector<tuple<int, int, int>> arr;

          for(int i = 0 ; i < n ; i++)
          {
               double temp = (double)val[i] / wt[i] ; 
               arr.push_back({temp , wt[i] , val[i]}) ; 
          }
          sort(arr.rbegin() , arr.rend()) ; 

          double sum = 0.0 ; 
          int remain = capacity ; 
          for(int i = 0 ; i < n ; i++)
          {
               int v = get<2>(arr[i]) ; 
               int w = get<1>(arr[i]) ; 
               double r = get<0>(arr[i]) ;
               
               if(w<=remain)
               {
                    sum += v ; 
                    remain = remain -w ; 
               }
               else{
                    sum += remain * r ; 
                    remain = 0 ; 
                    break ; 
               }  
          }
          return sum ; 
     }

} ; 
int main()
{

     vector<int> val = {60, 100, 120} ;
     vector<int> wt = {10, 20, 30} ; 
     int capacity = 50 ; 
     Solution s1; 
     double result = s1.fractionalKnapsack(val , wt , capacity) ; 

     cout << "The Value has been Stored : " << result  ;

     return 0;
}