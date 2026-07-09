#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool DFS(vector<vector<int>> &adj, int u, vector<bool> &visited, vector<bool> &pathVisited)
     {

          visited[u] = true;
          pathVisited[u] = true;

          for (auto v : adj[u])
          {
               if (visited[v] == false)
               {
                    if (DFS(adj, v, visited, pathVisited))
                    {
                         return true;
                    }
               }
               else if (pathVisited[v] == true)
               {
                    return true;
               }
          }
          pathVisited[u] = false;
          return false;
     }

public:
     bool isCyclic(int V, vector<vector<int>> &edges)
     {
          // code here
          vector<vector<int>> adj(V);

          for (auto edge : edges)
          {
               int u = edge[0];
               int v = edge[1];

               adj[u].push_back(v);
          }

          vector<bool> visited(V, false);
          vector<bool> pathVisited(V, false);

          for (int i = 0; i < V; i++)
          {
               if (visited[i] == false)
               {
                    if (DFS(adj, i, visited, pathVisited))
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
         {1, 2},
         {2, 3},
         {3, 1} // cycle
     };

     Solution s1;

     bool result = s1.isCyclic(V, edges);

     if (result)
          cout << "Graph have cycle " << endl;
     else
          cout << "Graph does have cycle" << endl;
     return 0;
}