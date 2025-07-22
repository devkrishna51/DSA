#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    for(int i  =1 ; i <=10 ; i++)
    {
        if ( n % i ==0)
        {
            cout << i << "    "  ;
        }
    }
    return 0;
}