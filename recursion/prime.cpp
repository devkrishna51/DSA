#include<iostream>
using namespace std ;
int primecheck (int n , int i  = 2)
{    int prime = 1 ;
    if(n==0)
    {
        prime = 0 ;
        return prime;
    }  
    if(n % i == 0)
    {
      prime = 0;  
      return prime;
    }
    else{
        return prime;
    }
    primecheck(n , i +1);
}
int main()
{
    int n = 7 ;
    int result = primecheck(n);
    if(result == 0)
    {
        cout << "no is not prime" ;
    }
    else{
        cout << "No is prime";
    }
}