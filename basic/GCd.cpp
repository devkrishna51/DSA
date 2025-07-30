#include <iostream>
using namespace std;
int count = 0;
int print(int a, int b)
{
        count ++;
    
        if (a == b)
        {
            return a ;
        }
        else if (a > b)
        {
            return print(a-b , b);
        }
        return (a,b-a);
}
int main() {
    int n = 12 ;
    int n2 = 18 ;
   int result = print(n,n2);
  cout << "the gcd of no is : " << result <<endl;
  cout << "how many time function call : " << count <<endl;
    return 0;
}
