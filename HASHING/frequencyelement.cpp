#include <iostream>
using namespace std;
int main()
{
     int arr[5] = {1, 1, 1, 2, 2};
     int hash[100] = {0};
     for (int i = 0; i < 5; i++)
     {
          hash[arr[i]]++;
     }

     int temp = hash[0];
     int max = 0;
     for (int i = 0; i < 100; i++)
     {
          if (hash[i] > temp)
          {
               temp = hash[i];
               max = i;
          }
     }
     cout << "the frequency of element is : " << max << endl;
     return 0;
}