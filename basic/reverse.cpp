#include<iostream>
int main()

{   
    int n = 1234 ;
    int rev = 0 ;
    while(n > 0 )
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n /10;
    }

   std:: cout << "Reversed no : " <<rev;
    return 0 ;
}