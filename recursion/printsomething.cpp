#include<iostream>
using namespace std ; 
void print(int n)
{
    if(n == 0)
    {
        return ; 
    }
    string name = "krishna"; 
    cout << name << "  "; 
    print(n-1);
}
int main()
{
    int n = 12;
    print(n); 
    return 0 ; 
}