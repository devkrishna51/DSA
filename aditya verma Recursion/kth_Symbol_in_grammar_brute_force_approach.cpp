#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
     int kthGrammar(int n, int k)
     {
          if (n == 1 && k == 1)
          {
               return 0;
          }
          vector<vector<int>> arr;
          arr.push_back({0});
          for (int i = 1; i < n; i++)
          {
               vector<int> prev = arr[i - 1];
               vector<int> curr;
               for (auto x : prev)
               {
                    if (x == 0)
                    {
                         curr.push_back(0);
                         curr.push_back(1);
                    }
                    else
                    {
                         curr.push_back(1);
                         curr.push_back(0);
                    }
               }
               arr.push_back(curr);
          }
          return arr[n - 1][k - 1];
     }
};
int main()
{

     int n, k;
     cout << "Enter the n  : ";
     cin >> n;
     ;
     cout << " Enter the K : ";
     cin >> k;
     Solution s1;
     int result = s1.kthGrammar(n, k);
     cout << endl
          << "the Result is : " << result << endl;

     return 0;
}