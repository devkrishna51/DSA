#include <iostream>
using namespace std;
class Solution
{
public:
     int removeDuplicates(int arr[], int n)
     {
          int i = 0;
          for (int j = 1; j < n; j++)
          {
               if (arr[i] != arr[j])
               {
                    i++;
                    arr[i] = arr[j];
               }
          }
          return i+1 ; 
     }
} ;

int main()
{
     int arr[] = {1, 1, 2, 2, 3};
     int n = sizeof(arr) / sizeof(arr[0]);
     for(int i = 0 ; i < n ; i++)
     {
          cout << arr[i] << " " ; 
     }
     Solution s1 ; 
    int n2=  s1.removeDuplicates(arr , n) ; 
     cout << endl ;
     for(int i = 0 ; i <n2  ; i++)
     {
          cout << arr[i] << " " ; 
     }
     return 0;
}