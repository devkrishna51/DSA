#include<iostream>
using namespace std ;
int palin (int n)
{int rev = 0 ;
     while(n>0)
    {
        int digit  = n % 10 ;
        rev  = rev * 10 + digit ; 
        n = n / 10; 
    }
    return rev ; 
}
int main()
{
    int n = 1221; 
    int original = n  ; 
    int result = palin(n);  
   
    if (result== original)
    {
        cout << "the entered no is palindorme" << endl ;
    }
    else{
        cout << "Entered no is not palindorme " <<endl;
    }
    return 0 ;
}