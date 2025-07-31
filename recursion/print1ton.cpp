#include<iostream>
using namespace std ; 
void print(int n , int i = 1 )
{
    if(n == 0)
    {
        return ; 
    }
   
    cout << i << "  "; 
    print(n-1 , i+1);
}
int main()
{
    int n = 12;
    print(n); 
    return 0 ; 
}