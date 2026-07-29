#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int networkDelayTime(vector<vector<int>> &times, int n, int k)
     {
          vector<vector<pair<int, int>>> adj(n + 1);
          for (auto edge : times)
          {
               int u = edge[0];
               int v = edge[1];
               int wt = edge[2];

               adj[u].push_back({v, wt});
          }
          vector<int> dist(n + 1, INT_MAX);
          priority_queue<pair<int, int>, vector<pair<int, int>>,
                         greater<pair<int, int>>>
              q;
          q.push({0, k});
          dist[k] = 0;

          while (!q.empty())
          {

               pair<int,int> p = q.top();
               int wt = p.first;  
               int u = p.second ;
               q.pop();
               if (wt > dist[u])
               {
                    continue;
               }
               for (auto v : adj[u])
               {
                    int node = v.first;
                    int currWt = v.second;
                    int currWeight = currWt + wt;

                    if (currWeight < dist[node])
                    {
                         dist[node] = currWeight;
                         q.push({currWeight, node});
                    }
               }
          }
          int ans = INT_MIN;
          for (int i = 1; i <= n; i++)
          {
               if (dist[i] == INT_MAX)
               {
                    return -1;
               }
               ans = max(dist[i], ans);
          }
          return ans;
     }
};
int main()
{

     Solution s1;

     vector<vector<int>> times = {
         {2, 1, 1},
         {2, 3, 1},
         {3, 4, 1}};

     int n = 4;
     int k = 2;

     int ans = s1.networkDelayTime(times, n, k);

     if (ans == -1)
     {
          cout << "It is not possible for all the nodes to receive the signal." << endl;
     }
     else
     {
          cout << "The minimum time required for all the nodes to receive the signal is: " << ans << endl;
     }
     return 0;
}