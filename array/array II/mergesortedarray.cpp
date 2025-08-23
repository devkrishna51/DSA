#include <iostream>
#include <vector>

using namespace std;
int main()
{
     int n = 3 ; 
     int m = 3 ;  
    int arr[m+n] = {1,2,3}; 
    int arr2[m] = {2,5,6} ; 
     int k = m + n -1 ; 
     int i  = n -1; 
     int j = m - 1; 
     while(i >=0 && j>= 0 )
     {
          if(arr[i] > arr2[j])
          {
               arr[k] = arr[i] ; 
               i-- ; 
          }
          else{
               arr[k] = arr2[j] ; 
               j-- ; 

          }
          k-- ; 
     }
     for(int i = 0 ; i < m+n ; i++)
     {
          cout << arr[i] << " ";
     }
     return 0;
}