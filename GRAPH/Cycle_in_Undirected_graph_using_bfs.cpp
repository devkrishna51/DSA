#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     bool isCycle(int V, vector<vector<int>> &edges)
     {

          vector<vector<int>> adj(V);

          for (auto edge : edges)
          {
               int parent = edge[0];
               int node = edge[1];

               adj[parent].push_back(node);

               adj[node].push_back(parent);
          }

          vector<bool> visited(V, false);
          for (int i = 0; i < V; i++)
          {
               if (visited[i] == false)
               {
                    queue<pair<int, int>> q;
                    q.push({i, -1});
                    visited[i] = true;

                    while (!q.empty())
                    {
                         pair<int, int> p = q.front();
                         q.pop();

                         int node = p.first;
                         int parent = p.second;
                         for (auto v : adj[node])
                         {
                              if (visited[v] == false)
                              {
                                   visited[v] = true;
                                   q.push({v, node});
                              }
                              else if (visited[v] == true && v != parent)
                              {
                                   return true;
                              }
                         }
                    }
               }
          }

          return false;
     }
};
int main()
{
     int V = 5;

     vector<vector<int>> edges = {
         {0, 1},
         {1, 2},
         {2, 3},
         {3, 1}, 
         {3, 4}
     };

     Solution s1 ; 
     bool result = s1.isCycle(V , edges) ; 

     if(result)
          cout << "Graph have cycle" <<endl  ;
     else 
          cout << "Graph does not have cycle" <<endl ; 
          
     
     return 0;
}