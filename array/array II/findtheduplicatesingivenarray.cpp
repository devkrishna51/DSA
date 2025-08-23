#include<iostream>
using namespace std ; 
int main()
{
     int arr[6] = {1,2,4,4,3,5} ; 
     int hash[100] = {0} ; 
     for(int i = 0 ; i < 6 ; i++)
     {
          hash[arr[i]]++ ; 
     }
     for(int i = 0 ; i < 100 ;i++)
     {
          if(hash[i] >=2)
          
          {
               cout << i  << " "; 
          }
     }
     return 0 ; 
}