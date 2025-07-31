#include<iostream>
int sumprint(int n )
{
    if(n==0)
    {
        return 0 ; 
    }
   return n + sumprint(n-1);
}
int main()
{
    int n = 10 ;
    int result = sumprint(n);
    std::cout << result ; 
    return 0 ;

}