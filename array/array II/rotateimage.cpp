#include <iostream>
using namespace std;
int main()
{
     int arr[3][3] = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}};

         for(int i = 0 ; i < 3 ; i++ )
         {
          for(int j = i +1 ; j < 3 ; j++)
          {
               int temp = arr[i][j] ; 
               arr[i][j] = arr[j][i] ; 
               arr[j][i] = temp ; 
          }
         }
         for(int i = 0 ; i <3 ; i++ )
     {
          for(int j = 0 ; j < 3 ; j ++)
          {
               cout << arr[i] [j] << "  "; 
          }
          cout <<endl ;
     }
     cout <<endl ;
     cout <<endl ;
     cout <<endl ;
     for(int i = 0 ; i < 3 ; i++)
     {
          int start = 0 , end = 3 -1 ; 
          while(start < end) 
          {
               int temp = arr[i][start] ; 
               arr[i][start] = arr[i][end] ; 
               arr[i][end] = temp ; 
               start++ ; 
               end -- ; 
          }
     }
     for(int i = 0 ; i <3 ; i++ )
     {
          for(int j = 0 ; j < 3 ; j ++)
          {
               cout << arr[i] [j] << "  "; 
          }
          cout <<endl ;
     }
     return 0;
}