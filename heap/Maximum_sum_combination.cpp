#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> topKSumPairs(vector<int> &a, vector<int> &b, int k)
     {
          // code here
          sort(a.begin(), a.end());
          sort(b.begin(), b.end());
          int n = a.size();
          priority_queue<pair<int, pair<int, int>>> q;
          q.push({a[n - 1] + b[n - 1], {n - 1, n - 1}});
          set<pair<int, int>> st;
          st.insert({n - 1, n - 1});
          int time = 0;
          vector<int> result;
          while (time < k)
          {
               pair<int, pair<int, int>> p = q.top();
               q.pop();
               int sum = p.first;
               int i = p.second.first;
               int j = p.second.second;
               result.push_back(sum);
               if (i - 1 >= 0 && st.find({i - 1, j}) == st.end())
               {

                    st.insert({i - 1, j});
                    q.push({a[i - 1] + b[j], {i - 1, j}});
               }

               if (j - 1 >= 0 && st.find({i, j - 1}) == st.end())
               {
                    st.insert({i, j - 1});
                    q.push({a[i] + b[j - 1], {i, j - 1}});
               }

               time++;
          }
          return result;
     }
};

int main()
{
     Solution s1;

     vector<int> A = {9, 7, 5, 3, 1};
     vector<int> B = {8, 6, 4, 2, 0};

     int K = 7;

     vector<int> ans = s1.topKSumPairs(A , B , K);

     cout << "The " << K << " maximum sum combinations are: ";

     for (int x : ans)
     {
          cout << x << " ";
     }

     cout << endl;

     return 0;
}