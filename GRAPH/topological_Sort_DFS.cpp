#include <bits/stdc++.h>
using namespace std;

class Solution
{
     stack<int> st;
     void DFS(vector<vector<int>> &adj, int u, vector<bool> &visited)
     {
          visited[u] = true;

          for (auto v : adj[u])
          {
               if (!visited[v])
               {
                    DFS(adj, v, visited);
               }
          }
          st.push(u);
     }

public:
     vector<int> topoSort(int V, vector<vector<int>> &edges)
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
          for (int i = 0; i < V; i++)
          {
               if (visited[i] == false)
               {
                    DFS(adj, i, visited);
               }
          }
          vector<int> result;
          while (!st.empty())
          {
               result.push_back(st.top());
               st.pop();
          }
          return result;
     }
};
int main()
{

     int V = 6;

     vector<vector<int>> edges = {
         {5, 2},
         {5, 0},
         {4, 0},
         {4, 1},
         {2, 3},
         {3, 1}
     };

     Solution s1 ; 
     vector<int> result = s1.topoSort(V , edges) ; 

     for(auto x : result)
     {
          cout << x <<" -> " ; 
     }
     return 0;
}