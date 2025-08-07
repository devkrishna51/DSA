#include <iostream>
using namespace std;
int main()
{
     int arr[5] = {1, 1, 2, 2, 3};
     int hash[100] = {0};
     for (int i = 0; i < 5; i++)
     {
          hash[arr[i]]++;
     }

     for(int i = 0 ; i <100 ; i++)
     {
          if(hash[i] > 0)
          {
               cout << i << "," << hash[i] <<endl;
          }
     }
     return 0;
}