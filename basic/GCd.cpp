#include <iostream>
using namespace std;
int main()
{
    int a = 12 ;
    int b = 18 ;
    for(int i = 1 ; i < a ; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << "  ";
        }
    }
    return 0;
}
