#include <iostream>
using namespace std;
int armstrong(int n, int original)
{
    int i = 0;
    while (n > 0)
    {
        i++;
        n = n / 10;
    }
    cout << "the digits are : " << i << endl;
    int sum = 0;

    while (original > 0)
    {
        int power = 1;
        int digit = original % 10;
        for (int j = 1; j <= i; j++)
        {
            power = power * digit;
        }
        sum = sum + power;
        original = original / 10;
    }
    return sum;
}
int main()
{
    int n = 370;
    int original = n;
    int arm = original;
    int result = armstrong(n, original);

    if (result == arm)
    {
        cout << "no is armstrong" << endl;
    }
    else
    {
        cout << "no is not armstrong" << endl;
    }
    return 0;
}