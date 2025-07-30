#include <iostream>
using namespace std;
int countdigit(int n)
{
    
    if (n == 0)
    {
        return 0;
    }
       return 1 + countdigit(n/10) ;
}
int main()
{
    int n = 1234;
    int result = countdigit(n);
    cout << "the digits are : " << result ;
    return 0;
}