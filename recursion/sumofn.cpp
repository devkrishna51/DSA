#include<iostream>
using namespace std; 
void print(int n )
{ 
  int sum = 0;
    while (n>0)
    {
       sum = sum + n;
        n--;
    }
    cout << "the sum fo no is : " << sum;
}
int main(){
    int n = 5 ;
    print(n);
    return 0;
}