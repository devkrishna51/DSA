#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "the no is not prime " << endl;
            prime = 0;
        }
    }
if(prime)
{
    cout << "the no is prime" << endl;
}
    return 0;
}