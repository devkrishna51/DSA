#include<iostream>
using namespace std ;
int count(int n)
{
    int i = 0 ;
    while(n>0)
    {
        i++;
        n = n /10;
    }
    return i ; 
}
int main()
{
    int n = 1234 ; 
    int result = count(n);
    cout << "the digits are : " << result  ;
    return 0;
}