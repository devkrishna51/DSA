#include<iostream>
using namespace std ; 
int main()
{
     int arr[3][3] = {
          {1,2,3},
          {4,5,6},
          {7,8,9},
     };
     int target = 5 ; 
     int i = 0 ; int j = 3-1 ; 
     while(i < 3 && j>=0)
     {
          if(arr[i][j] == target)
          {
               cout << target <<"  mila :  " << i << " , " << j <<"  par" ;
               break ; 
          }
          else if(arr[i][j] > target)
          {
               j--;
          }
          else 
          {
               i++ ; 
          }

     }
     
     return 0 ; 
}