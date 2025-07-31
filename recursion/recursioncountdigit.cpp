#include<iostream>
int count (int n )
{
    if(n==0)
    {
        return 0 ; 
    }
    return 1 + count (n/10);
}
int main()
{
    int n  = 1234 ; 
    int result = count(n);
    std :: cout << result ; 
    return 0 ; 
}