#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
     vector<string> result;

public:
     void solve(string add, char o, char c, int open, int close)
     {
          if (open == 0 && close == 0)
          {
               result.push_back(add);
               return;
          }
          if (open > 0)
          {
               solve(add + o, o, c, open - 1, close);
          }
          if (close > open)
          {
               solve(add + c, o, c, open, close - 1);
          }
     }
     vector<string> generate(int n)
     {

          solve("", '(', ')', n, n);
          return result;
     }
};
int main()
{

     Solution s1;
     int n = 3;
     vector<string> res = s1.generate(n);
     for (auto x : res)
     {
          cout << x << "   " << endl;
     }
     return 0;
}