#include<iostream>
int gcd(int a , int b)
{
    if (a==b) return a ;
    else if(a> b)
    {
        return gcd(a-b, b );
    }
    else{
        return  gcd (a, b -a);
    }

}
int main()
{
    int a = 12 ; 
    int b= 18  ;
    int result = gcd(a,b);
    std:: cout << "the GCD is : " << result ;
    return 0 ; 
}