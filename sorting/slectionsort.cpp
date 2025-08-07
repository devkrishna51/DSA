// Har step me sabse chhota element dhoond ke sahi jagah (starting me) le jaate hain.

// Ek ek karke sabke liye ye repeat karte hain.

#include<iostream>
using namespace std ; 
int main( )
{
     int arr[5] = {1,2,4,3,5} ;
     for(int i = 0 ; i< 5 ; i++)
     {
          for(int j = i +1 ; j <5 ;j++)
          {
               if(arr[i] > arr[j])
               {
                    int temp = arr[i] ; 
                    arr[i] = arr[j] ; 
                    arr[j] = temp ; 
               }
          }
     }

     for(int i = 0 ; i < 5 ; i++)
     {
          cout << arr[i] << "   ";
     }
     return 0 ; 
}