#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
     {
          // Code here
          vector<vector<pair<int, int>>> adj(V);
          for (auto edge : edges)
          {
               int u = edge[0];
               int v = edge[1];
               int wt = edge[2];

               adj[u].push_back({v, wt});
               adj[v].push_back({u, wt});
          }

          vector<int> distance(V, INT_MAX);
          distance[src] = 0;
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
          q.push({0, src});

          while (!q.empty())
          {

               pair<int,int> p  = q.top();
               q.pop();
               int wt = p.first; 
               int u = p.second; 
               if (wt > distance[u])
               {
                    continue;
               }
               for (auto v : adj[u])
               {

                    int node = v.first;
                    int currWt = v.second;
                    int currWeight = currWt + wt;
                    if (currWeight < distance[node])
                    {
                         distance[node] = currWeight;
                         q.push({currWeight, node});
                    }
               }
          }
          return distance;
     }
};
int main()
{
     Solution s1;

     int V = 7;

     vector<vector<int>> edges = {
         {0, 1, 2},
         {0, 2, 4},
         {1, 2, 1},
         {1, 3, 7},
         {2, 4, 3},
         {3, 5, 1},
         {4, 3, 2},
         {4, 5, 5},
         {4, 6, 6},
         {5, 6, 2}};

     int src = 0;

     vector<int> ans = s1.dijkstra(V, edges, src);

     cout << "The shortest distances from source vertex " << src << " are:" << endl;

     for (int i = 0; i < ans.size(); i++)
     {
          cout << "Vertex " << i << " -> " << ans[i] << endl;
     }
     return 0;
}