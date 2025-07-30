#include <iostream>
using namespace std;
int palindorme(int n, int rev = 0)
{

    if(n==0)
    {
        return rev ; 
    }
    palindorme(n / 10, rev = rev * 10 + n % 10);
   
}
int main()
{
    int n = 121;
    int save = n;
    int result = palindorme(n);
    if(save == result )
    {
        cout << "no is palindorme" <<endl;
    }
    else{
        cout << "no is not palindorme" <<endl;
    }

    return 0;
}