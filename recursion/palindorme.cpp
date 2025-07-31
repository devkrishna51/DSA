#include <iostream>
int palindorme(int n, int rev = 0)
{
        if(n == 0 )
        {
            return rev ; 
        }
        return palindorme(n/10 , rev = rev * 10  + n % 10 );

    }
int main()
{
    int n = 1221;
    int result = palindorme(n);
    if (n == result)
    {
        std ::cout << "the no is palindorme";
    }
    else
    {
        std::cout << "no is not palindorme";
    }
    return 0;
}