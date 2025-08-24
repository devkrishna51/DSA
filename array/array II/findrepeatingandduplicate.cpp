#include<iostream> 
using namespace std ; 
int main()
{
     int arr[] = {1, 1, 3, 6, 7, 5, 2} ; 
     int n = sizeof(arr)/sizeof(arr[0]) ; 
     int hash[n+1] = {0};
     for(int i = 0 ; i < n ; i++)
     {
          hash[arr[i]]++;
     }
     for(int i =1 ; i <=n ;i++)
     {
          if(hash[i] >= 2)
          {
               cout << "repeating element is : " << i << endl ; 
          }
          else if(hash[i] == 0){
               cout << "missing element :  " << i <<endl ; 
          }
     }
     return 0 ; 
}