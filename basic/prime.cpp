#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout << "Enter a no : ";
    cin >> n ;
    int prime =1;
    for(int i =2 ; i < n ; i++)
   {
    if(n % i == 0 )
    {
        cout <<"no is not prime" <<endl;
        prime = 0 ;
        break ;
    }
   }
   if(prime)
   {
    cout << "no is prime" <<endl;
   }
    return 0;
}