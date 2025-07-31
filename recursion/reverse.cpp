#include<iostream>
int reverse(int n , int rev  = 0 )
{
    if(n==0 )
    {
        return rev ; 
    }
    return reverse(n/10 , rev = rev * 10 + n % 10 );
}
int main()
{
    int n = 1234 ; 
    int result = reverse(n);
    std :: cout << "the reversed no is : " << result;
    return 0 ;
}