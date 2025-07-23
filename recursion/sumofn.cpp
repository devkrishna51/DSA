#include <iostream>
using namespace std;
int print(int n)

{

  if (n == 0)
  {
    return 0;
  }
  else
  {
    return n + print(n - 1);
  }
}
int main()
{
  int n = 5;
  int result = print(n);
  cout << "sum of all no is : " << result << endl;

  return 0;
}