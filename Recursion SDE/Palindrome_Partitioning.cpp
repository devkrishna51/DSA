#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
     vector<vector<string>> result;

     bool isPalin(string s1)
     {
          string s2 = s1;
          reverse(s1.begin(), s1.end());
          return s1 == s2;
     }
     void generate(string str, vector<string> ans)
     {
          if (str.size() == 0)
          {
               result.push_back(ans);
               return;
          }
          for (int i = 0; i < str.size(); i++)
          {
               string part = str.substr(0, i + 1);
               if (isPalin(part))
               {
                    ans.push_back(part);
                    generate(str.substr(i + 1), ans);
                    ans.pop_back();
               }
          }
     }

public:
     vector<vector<string>> Generate_Partition(string &str)
     {
          vector<string> ans;
          generate(str, ans);
          return result;
     }
};
int main()
{
     string str = "aab";

     Solution s1;
     vector<vector<string>> r = s1.Generate_Partition(str);
     for (auto x : r)
     {
          cout << "[";
          for (auto x2 : x)
          {
               cout << x2 << " ";
          }
          cout << "]" << endl;
     }
     return 0;
}