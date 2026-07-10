#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     vector<int> toposortBFS(int V, vector<vector<int>> &edges)
     {
          vector<vector<int>> adj(V);
          vector<int> indegree(V, 0);
          for (auto edge : edges)
          {
               int u = edge[0];
               int v = edge[1];

               adj[u].push_back(v);

               indegree[v]++;
          }

          queue<int> q;
          for (int i = 0; i < V; i++)
          {
               if (indegree[i] == 0)
               {
                    q.push(i);
               }
          }

          vector<int> result;
          while (!q.empty())
          {
               int u = q.front();
               result.push_back(u);
               q.pop();

               for (auto v : adj[u])
               {
                    indegree[v]--;

                    if (indegree[v] == 0)
                    {
                         q.push(v);
                    }
               }
          }
          return result;
     }
};
int main()
{

     int V = 8;

     vector<vector<int>> edges = {
         {0, 2},
         {1, 2},
         {1, 3},
         {2, 4},
         {3, 4},
         {4, 5},
         {4, 6},
         {5, 7},
         {6, 7}
     };

     Solution s1 ; 

     vector<int> result = s1.toposortBFS(V , edges) ; 

     cout << "Valid topological Order : " ; 
     for(auto x : result)
     {
          cout << x << " " ; 

     }
     cout << endl  ; 
     return 0;
}
