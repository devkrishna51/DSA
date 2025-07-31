#include<iostream>
int digitcount(int n , int i  = 0 )
{
    if(n==0)
    {
        return 0 ;
    }
    return 1 + digitcount(n/10 , i +1);
}
int pow(int n , int count)
{
    int result  = 1 ; 
    for(int i = 0 ; i < count ; i++)
    {
        result = result * n ;
    }
    return result ;
}
int armstrong(int n  , int count) 
{
    if(n==0)
    {
        return  0 ; 
    }
    int digit = n % 10 ;
    return pow(digit , count) + armstrong(n/10 , count);
}
int main()
{
    int n = 153 ; 
    int count = digitcount(n);
    int arm = armstrong(n , count);
    if(n==arm)
    {
        std :: cout << "no is armstrong" ; 
    }
    else{
        std ::cout << "no is not armstrong";
    }
    return 0 ; 
}