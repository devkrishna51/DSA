#include <bits/stdc++.h>
using namespace std;

class Solution
{

     bool DFS(vector<vector<int>> &adj, int u, int parent, vector<bool> &visited)
     {

          visited[u] = true;

          for (auto v : adj[u])
          {
               if (visited[v] == false)
               {
                    if (DFS(adj, v, u, visited))
                    {
                         return true;
                    }
               }
               else if (visited[v] == true && v != parent)
               {
                    return true;
               }
          }
          return false;
     }

public:
     bool isCycle(int V, vector<vector<int>> &edges)
     {

          vector<vector<int>> adj(V);

          for (auto edge : edges)
          {
               int u = edge[0];
               int v = edge[1];

               adj[u].push_back(v);
               adj[v].push_back(u);
          }

          vector<bool> visited(V, false);

          for (int i = 0; i < V; i++)
          {
               if (visited[i] == false)
               {
                    bool result = DFS(adj, i, -1, visited);

                    if (result)
                    {
                         return true;
                    }
               }
          }
          return false;
     }
};
int main()
{
     int V = 4;

     vector<vector<int>> edges = {
         {0, 1},
         {0, 2},
         {1, 2},
         {2, 3}
     };

     Solution s1; 
     bool result = s1.isCycle(V , edges)  ; 

     if(result)
          cout << "Graph have Cycle" ; 
     else 
          cout << "Graph doe not have Cycle" ; 

     return 0;
}