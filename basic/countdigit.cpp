#include<iostream>
using namespace std ;
int main()
{
    int n = 13423234 ;
    int rev = 0 ;
    while (n > 0)
    {
        rev++;
        n = n / 10 ;
    }
    cout << "Digits are :" <<rev<<endl;
    return 0;
}