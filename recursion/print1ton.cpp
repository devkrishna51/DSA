#include<iostream>
using namespace std; 
void print(int n )
{ 
    int i = 1 ;
    while (i<=n)
    {
        cout << i <<"  ";
        i++;
    }
}
int main(){
    int n = 5 ;
    print(n);
    return 0;
}