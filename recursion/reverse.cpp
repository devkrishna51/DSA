#include<iostream>
using namespace std ; 
int reverse(int n , int rev = 0)
{
    if(n == 0 )
    {
        return rev ;
    }
    reverse(n/10 , rev = rev * 10 + n % 10);
}
int main()
{
    int n  = 1234 ;
    int result = reverse(n);
    cout << "\nthe reversed no is : " << result <<endl<<endl;
    return 0 ; 
}