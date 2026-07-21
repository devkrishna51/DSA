#include <bits/stdc++.h>
using namespace std;
class Solution
{
     bool DFS(vector<vector<int>> &adj, vector<bool> &visited, int u, vector<bool> &safe, vector<bool> &pathVisited)
     {
          visited[u] = true;
          pathVisited[u] = true;
          for (auto v : adj[u])
          {
               if (visited[v] == false)
               {
                    if (DFS(adj, visited, v, safe, pathVisited))
                    {
                         return true;
                    }
               }
               else if (pathVisited[v] == true)
               {
                    return true;
               }
               else if (safe[v] == false)
               {
                    return true;
               }
          }
          pathVisited[u] = false;
          safe[u] = true;

          return false;
     }

public:
     vector<int> eventualSafeNodes(vector<vector<int>> &graph)
     {
          int n = graph.size();
          vector<bool> visited(n, false);
          vector<bool> pathVisited(n, false);
          vector<int> result;
          vector<bool> safe(n, false);
          for (int i = 0; i < n; i++)
          {
               if (visited[i] == false)
               {
                    DFS(graph, visited, i, safe, pathVisited);
               }
          }
          for (int i = 0; i < n; i++)
          {
               if (safe[i])
               {
                    result.push_back(i);
               }
          }
          return result;
     }
};
int main()
{
     Solution s1;

     vector<vector<int>> graph = {
         {1, 2},
         {2, 3},
         {5},
         {0},
         {5},
         {},
         {}};

     vector<int> ans = s1.eventualSafeNodes(graph);

     cout << "The eventual safe states are: ";

     for (int node : ans)
     {
          cout << node << " ";
     }

     cout << endl;

     return 0;
}