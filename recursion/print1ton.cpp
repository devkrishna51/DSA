#include<iostream>
using namespace std ;
void print(int n )
{
    if(n == 0)
    {
        return ;
    }
    else{
         print(n-1);
        cout << n <<endl;
       
    }
    
}
int main()
{
    int n = 5 ;
    print(n);
    return 0;
}