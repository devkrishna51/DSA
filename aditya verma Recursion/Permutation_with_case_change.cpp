#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{

     vector<string> arr;
     void solve(string str, string space, int i)
     {
          if (i == str.size())
          {
               arr.push_back(space);
               return;
          }
          solve(str, space + (char)tolower(str[i]), i + 1);
          solve(str, space + (char)toupper(str[i]), i + 1);
     }

public:
     vector<string> permutation(string s)
     {
          string space = "";
          solve(s, space, 0);
          return arr;
     }
};
int main()
{
     string str = "abc";
     Solution s1;
     vector<string> result = s1.permutation(str);
     for (auto x : result)
     {
          cout << "[" << x << "]" << " , ";
     }
     return 0;
}
