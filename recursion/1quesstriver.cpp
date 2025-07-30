//understand recursion by printing somethng N times
#include<iostream>
using namespace std ;
int print (int n , int i = 1 )
{
    if(n==0)
    {
        return 0 ;
    }
    cout << i << "  ";
    print(n-1,i+1);


}
int main()
{
    int n = 10 ;
    print(n);
    return 0;
}