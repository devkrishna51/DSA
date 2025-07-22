#include<iostream>
using namespace std; 
void print(int n )
{ 
  
    while (n>0)
    {
        cout << n <<"  ";
        n--;
    }
}
int main(){
    int n = 5 ;
    print(n);
    return 0;
}