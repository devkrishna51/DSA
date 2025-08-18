#include <iostream>
using namespace std;
int main()
{
     int arr[] = {1, 2, 3, 6, 4};
     int n = sizeof(arr) / sizeof(arr[0]);
     int pivot = 0;
     for (int i = n - 2; i >= 0; i--)
     {
          if (arr[i] < arr[i + 1])
          {
               pivot = i;
               break;
          }
     }   
     for (int i = n - 1; i >= 0; i--)
     {
          if (arr[i] > arr[pivot])
          {
               int temp = arr[i];
               arr[i] = arr[pivot];
               arr[pivot] = temp;
               break;
          }
     }
 
     int start = pivot + 1 , end  = n -1 ; 
     while(start < end)
     {
          int temp = arr[start] ; 
          arr[start] = arr[end]; 
          arr[end] = temp ; 
          start ++ ; 
          end -- ; 
     }

     for(int i = 0 ; i < n ; i++)
     {
          cout << arr[i] <<"   " ;
      }
     return 0;
}