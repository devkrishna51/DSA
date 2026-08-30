#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;
          string str = to_string(n);
          int size = str.size();
          vector<pair<int, int>> arr;
          for (int i = 0; i < size; i++)
          {
               arr.push_back({str[i] - '0', i});
          }

          vector<string> result;
          for (int i = 0; i < arr.size(); i++)
          {
               pair<int, int> p = arr[i];
               int no = p.first;
               if (no == 0)
                    continue;
               int idx = str.size() - p.second;

               string temp = to_string(no);
               for (int i = 1; i < idx; i++)
               {
                    temp += '0';
               }
               result.push_back(temp);
          }
          cout << result.size() << endl;
          for (auto x : result)
          {
               cout << x << " "; 
          }
          cout << endl ; 
     }
     return 0;
}