#include<iostream>
using namespace std ;
int fact(int n )
{
    if(n==0)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int n =5; 
    int result  = fact(n);
    cout << "the sum is : " <<result << endl;
    return 0 ; 
}