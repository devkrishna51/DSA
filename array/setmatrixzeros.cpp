#include <iostream>
using namespace std;
int main()
{
     int arr[3][3] = {
         {1, 2, 3}, 
         {4, 0, 6} ,
         {7, 8, 9}
     };
 for(int i = 0 ;i < 3 ; i++)
     {
          for(int j = 0 ; j < 3 ; j++)
          {
               cout << arr[i][j] <<"   " ; 
          }
          cout << endl ; 
     }
     int row[3] = {0}; 
     int cols[3] = {0} ; 
     for(int i = 0 ; i < 3; i++)
     {
          for(int j = 0 ; j < 3; j++)
          {
               if(arr[i][j]==0)
               {
                    row[i] = 1; 
                    cols[i] = 1 ; 
               }
          }
     }

     for(int i = 0 ; i < 3 ; i++)
     {
          if(row[i] == 1)
          {
               for(int j = 0 ; j <3 ; j ++)
               {
                    arr[i][j] = 0 ; 
               }

          }
     }
     for(int i = 0 ; i < 3 ; i++)
     {
          if(cols[i] == 1)
          {
               for(int j = 0 ; j <3 ; j ++)
               {
                    arr[j][i] = 0 ; 
               }

          }
     }
cout << endl <<endl ;
     for(int i = 0 ;i < 3 ; i++)
     {
          for(int j = 0 ; j < 3 ; j++)
          {
               cout << arr[i][j] <<"   " ; 
          }
          cout << endl ; 
     }
     return 0;
}