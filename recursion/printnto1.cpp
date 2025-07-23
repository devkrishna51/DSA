#include<iostream>
using namespace std ;
void print(int n )
{
    if(n == 0)
    {
        return ;
    }
    else{
          cout << n <<endl;
         print(n-1);
      
       
    }
    
}
int main()
{
    int n = 5 ;
    print(n);
    return 0;
}