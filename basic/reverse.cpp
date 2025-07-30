#include<iostream>
using namespace std ;
int reverse (int n)
{
    int rev = 0 ; 
    while(n>0)
    {
        int digit = n % 10 ; 
        rev = rev * 10 + digit ; 
        n = n / 10;
    }
    return rev ;
}
int main()
{
    int n = 12345678; 
    int result = reverse(n);
    cout << "the revesed no is : " << result ;
    return 0 ; 
}