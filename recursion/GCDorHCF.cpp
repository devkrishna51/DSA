#include<iostream>
using namespace std ;
int countdigit (int n)
{
    if(n==0)
    {
        return 0 ;
    }
    return 1 + countdigit(n/10);
}
int pow (int number , int chalega)
{
    int result  = 1 ;
    for(int i  = 0 ;i < chalega ; i++)
    {
        result = result * number ;
    }
    return result ; 
}
int armstrong(int n  , int count)
{
        if(n == 0 )
       {
        return  0 ; 
       }
       int digit  = n % 10 ; 
       return pow(digit , count) + armstrong(n/10 ,  count);
}
int main()
{
    int n = 153;
    int count = countdigit(n);
    int arm = armstrong(n , count);
   if (n == arm)
   {
        cout << "no is armstrong " <<endl;
   }
   else{
    cout << "no is not armstrong";
   }
    return 0;
}