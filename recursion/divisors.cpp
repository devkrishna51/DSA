#include <iostream>
void divisors(int n, int i = 1)
{
    if (i > n)
    {
        return ;
    }
    if (n % i == 0)
    {
        std::cout << i << "   ";
     
    }
    divisors(n, i + 1);
}
int main()
{
    int n = 12;
    divisors(n);
    return 0;
}