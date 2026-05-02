#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
     int isGood(int num)
     {
          if (num == 0)
          {
               return 0;
          }
          int remain = isGood(num / 10);
          if (remain == 2)
               return 2;
          int d = num % 10;
          int digit_check;
          if (d == 1 || d == 0 || d == 8)
               digit_check = 0;

          else if (d == 2 || d == 5 || d == 6 || d == 9)
               digit_check = 1;
          else
               return 2;

          if (remain == 0 && digit_check == 0)
          {
               return 0;
          }
          return 1;
     }

public:
     int rotatedDigits(int n)
     {

          int count = 0;
          for (int i = 1; i <= n; i++)
          {
               if (isGood(i) == 1)
               {
                    count++;
               }
          }
          return count;
     }
};

int main()
{
     int num = 857;
     Solution s1;
     int result = s1.rotatedDigits(num) ; 

     cout << "The Rotated Digits : " << result << endl ; 
     
     return 0;
}