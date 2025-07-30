#include<iostream>
using namespace std ;
void divisor(int n , int i = 1 )
{
    if ( i > n) 
    {return ;}
    if(n % i ==0)
    {
        cout << i << "  ";
    }
    divisor(n,i+1);

}
int main()
{
    int n  = 18 ;
    divisor(n);
    return 0 ; 
}