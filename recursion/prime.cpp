#include <iostream>
int divisors(int n, int i = 2,int prime = 1)
{
    
    if (i == n)
    {
        prime = 1 ; 
        return prime;
    }
    if (n % i == 0)
    {
        prime = 0 ; 
        return prime ; 
    }
    return divisors(n,i+1, prime);

}
int main()
{
    int n = 7;
    int result = divisors(n);
    if(result == 0 )
  {
    std :: cout << "no is not prime "; 
  }
  else{
    std :: cout << "no is prime";
  }
    return 0;
}