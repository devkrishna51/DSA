#include<iostream>
using namespace std ; 
int i = 0 ;

int main()
{
    int a = 15 ; 
    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0 )
        {
            cout << i <<"  "; 
        }
    }
    return 0 ; 
}