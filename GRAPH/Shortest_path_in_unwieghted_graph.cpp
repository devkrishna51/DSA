#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int shortestPath(int V, vector<vector<int>> &edges, int src, int dest)
     {
          // code here
          vector<vector<int>> adj(V);
          for (auto edge : edges)
          {
               int u = edge[0];
               int v = edge[1];

               adj[u].push_back(v);
               adj[v].push_back(u);
          }

          queue<int> q;
          q.push(src);
          vector<int> dist(V, INT_MAX);
          dist[src] = 0;
          while (!q.empty())
          {
               int u = q.front();
               q.pop();

               for (auto v : adj[u])
               {
                    if (dist[v] == INT_MAX)
                    {
                         dist[v] = dist[u] + 1;
                         q.push(v);
                    }
               }
          }
          if (dist[dest] == INT_MAX)
          {
               return -1;
          }
          return dist[dest];
     }
};

int main()
{
     Solution s1;

     int V = 7;
     
     vector<vector<int>> edges = {
          {0, 1},
          {0, 2},
          {1, 3},
          {2, 3},
          {2, 4},
          {3, 5},
          {4, 5},
          {5, 6}};
          
          int src = 0;
          int dst = 6;

     int ans = s1.shortestPath(V, edges, src , dst);

     cout << "The shortest distance of each vertex from source " << src << " is:" << ans << endl;

   

     return 0;
}