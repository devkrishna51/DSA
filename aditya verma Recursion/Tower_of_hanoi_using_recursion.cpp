#include <iostream>
using namespace std;
class Solution
{

public:
     int towerOfHanoi(int n, int from, int to, int helper)
     {
          if (n == 0)
          {
               return 0;
          }
          int count = 0;
          count += towerOfHanoi(n - 1, from, helper, to);

          count += 1;

          count += towerOfHanoi(n - 1, helper, to, from);

          return count;
     }
};
int main()
{
     int n = 3;
     int from = 1;
     int helper = 2;
     int to = 3;
     Solution s1;
     int result = s1.towerOfHanoi(n, from, to, helper);
     cout << "Total Moves are : " << result << endl;
     return 0;
}