#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
     {
          // Code here
          vector<int> dist(V, 100000000);
          dist[src] = 0;
          for (int i = 0; i < V - 1; i++)
          {
               for (auto edge : edges)
               {
                    int u = edge[0];
                    int v = edge[1];
                    int wt = edge[2];

                    if (dist[u] != 100000000 && dist[u] + wt < dist[v])
                    {
                         dist[v] = dist[u] + wt;
                    }
               }
          }
          for (auto edge : edges)
          {

               int u = edge[0];
               int v = edge[1];
               int wt = edge[2];

               if (dist[u] != 100000000 && dist[u] + wt < dist[v])
               {
                    return {-1};
               }
          }

          return dist;
     }
};

int main()
{
     Solution s1;

     int V = 5;

     vector<vector<int>> edges = {
         {0, 1, 6},
         {0, 2, 7},
         {1, 2, 8},
         {1, 3, 5},
         {1, 4, -4},
         {2, 3, -3},
         {2, 4, 9},
         {3, 1, -2},
         {4, 3, 7}};

     int src = 0;

     vector<int> ans = s1.bellmanFord(V, edges, src);

     cout << "The shortest distances from source vertex " << src << " are:" << endl;

     for (int i = 0; i < ans.size(); i++)
     {
          cout << "Vertex " << i << " -> " << ans[i] << endl;
     }
     return 0;
}