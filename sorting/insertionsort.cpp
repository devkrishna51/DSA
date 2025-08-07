// Ek ek element uthate hain aur usse uske sahi jagah pe insert karte hain.
// Pehle wale part ko sorted maante hain aur naye element ko usme insert karte hain.

#include<iostream>
using namespace std ; 
int main()
{

     int arr[5] = {1,2,4,5,3} ; 
     for(int i =1 ; i < 5 ; i++)
     {
          int j = i ; 
          while(j>0 && arr[j-1] > arr[j])
          {
               int temp = arr[j] ; 
               arr[j] = arr[j-1] ; 
               arr[j-1] = temp ; 
               j--;
               }
     }
     for(int i = 0 ; i <5 ; i++)
{
     cout << arr[i] << "  ";
}
     return 0 ; 
}