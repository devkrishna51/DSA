#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst,
                           int k)
     {
          vector<vector<pair<int, int>>> adj(n);
          for (auto flight : flights)
          {
               int u = flight[0];
               int v = flight[1];
               int price = flight[2];

               adj[u].push_back({v, price});
          }

          priority_queue<pair<int, pair<int, int>>,
                         vector<pair<int, pair<int, int>>>,
                         greater<pair<int, pair<int, int>>>>
              q;
          vector<vector<int>> dist(n, vector<int>(k + 2, INT_MAX));

          q.push({0, {0, src}});
          dist[src][0] = 0;

          while (!q.empty())
          {
               auto [oldPrice, detail] = q.top();
               q.pop();
               auto [stop, node] = detail;
               if (oldPrice > dist[node][stop])
               {
                    continue;
               }
               if (stop == k + 1)
               {
                    continue;
               }
               for (auto v : adj[node])
               {
                    int u = v.first;
                    int price = v.second;

                    int newPrice = price + oldPrice;
                    if (newPrice < dist[u][stop + 1])
                    {
                         dist[u][stop + 1] = newPrice;
                         q.push({newPrice, {stop + 1, u}});
                    }
               }
          }
          int ans = INT_MAX;
          for (int j = 0; j < k + 2; j++)
          {
               ans = min(ans, dist[dst][j]);
          }
          if (ans == INT_MAX)
          {
               return -1;
          }
          else
          {
               return ans;
          }
     }
};
int main()
{
     Solution s1;

     int n = 4;

     vector<vector<int>> flights = {
         {0, 1, 100},
         {1, 2, 100},
         {2, 3, 100},
         {0, 2, 500}};

     int src = 0;
     int dst = 3;
     int k = 1;

     int ans = s1.findCheapestPrice(n, flights, src, dst, k);

     if (ans == -1)
     {
          cout << "There is no valid route from the source to the destination within "
               << k << " stops." << endl;
     }
     else
     {
          cout << "The minimum cost to travel from city " << src
               << " to city " << dst
               << " within " << k << " stops is: " << ans << endl;
     }
     return 0;
}